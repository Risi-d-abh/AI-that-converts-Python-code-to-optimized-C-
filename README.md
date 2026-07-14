# 🚀 AI that Converts Python Code to Optimized C++

An AI-powered application that converts Python code into optimized C++ using a Large Language Model (LLM), helping improve execution speed, reduce runtime overhead, and generate production-ready C++ code.

---

## ✨ Features

- 🐍 Converts Python code into optimized C++
- ⚡ Generates performance-focused C++ implementations
- 🤖 Powered by an LLM for intelligent code translation
- 📝 Clean and readable generated code
- 🎨 User-friendly Gradio interface
- 📋 Copy generated code instantly
- 🔒 Secure API key management using `.env`

---

## 🛠️ Tech Stack

- Python
- Gradio
- Groq API
- Llama Model
- python-dotenv

---

## 📂 Project Structure

```
.
├── app.py
├── styles.py
├── system_info.py
├── requirements.txt
├── .env
├── .gitignore
└── README.md
```

---

## ⚙️ Installation

### 1. Clone the repository

```bash
git clone https://github.com/yourusername/AI-that-converts-Python-code-to-optimized-Cpp.git
cd AI-that-converts-Python-code-to-optimized-Cpp
```

### 2. Create a virtual environment

**Windows**

```bash
python -m venv .venv
.venv\Scripts\activate
```

**macOS/Linux**

```bash
python3 -m venv .venv
source .venv/bin/activate
```

### 3. Install dependencies

```bash
pip install -r requirements.txt
```

### 4. Create a `.env` file

```env
GROQ_API_KEY=your_groq_api_key
```

### 5. Run the application

```bash
python app.py
```

---

## 💻 Example

### Python Input

```python
def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n-1)
```

### Generated C++

```cpp
long long factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}
```

---

## 🚀 Future Improvements

- Support multiple programming languages
- Benchmark generated code automatically
- Download generated C++ files
- Syntax highlighting
- Code explanation mode
- Optimization level selection

---

<img width="716" height="445" alt="image" src="https://github.com/user-attachments/assets/f26f10b3-38e9-49ec-b020-07516fb324d0" />


## 📄 License

This project is licensed under the MIT License.

---

## 👨‍💻 Author

**Rishabh Rana**

GitHub: https://github.com/Risi-d-abh
