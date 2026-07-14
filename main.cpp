#include <bits/stdc++.h>
using namespace std;

static inline uint32_t lcg_next(uint32_t &x) {
    // constants from the Python version
    x = x * 1664525u + 1013904223u; // overflow wraps modulo 2^32
    return x;
}

int64_t max_subarray_sum(int n, uint32_t seed, int min_val, int max_val) {
    uint32_t state = seed;
    const uint32_t range = static_cast<uint32_t>(max_val - min_val + 1);
    int64_t best = LLONG_MIN;
    int64_t cur = 0;

    for (int i = 0; i < n; ++i) {
        uint32_t rnd = lcg_next(state);
        int val = static_cast<int>(rnd % range) + min_val;

        cur = (cur > 0) ? cur + val : val;
        if (cur > best) best = cur;
    }
    return best;
}

int64_t total_max_subarray_sum(int n, uint32_t initial_seed, int min_val, int max_val) {
    uint32_t seed_state = initial_seed;
    int64_t total = 0;
    for (int k = 0; k < 20; ++k) {
        uint32_t seed = lcg_next(seed_state);
        total += max_subarray_sum(n, seed, min_val, max_val);
    }
    return total;
}

int main() {
    // Parameters
    const int n = 10000;
    const uint32_t initial_seed = 42u;
    const int min_val = -10;
    const int max_val = 10;

    auto start = chrono::high_resolution_clock::now();
    int64_t result = total_max_subarray_sum(n, initial_seed, min_val, max_val);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;

    cout << "Total Maximum Subarray Sum (20 runs): " << result << "\n";
    cout << "Execution Time: " << fixed << setprecision(6) << elapsed.count() << " seconds\n";
    return 0;
}