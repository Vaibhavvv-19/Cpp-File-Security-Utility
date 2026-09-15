# 🔐 C++ File Security Utility

A C++ project for encrypting and decrypting text files using a key-based character transformation.

##  About the Project

This project was developed while learning C++ file handling, functions, input validation, and basic encryption concepts.

The program allows users to encrypt a text file using a numerical key and later decrypt it using the same key.

> **Note:** This V1 implementation is designed for learning purposes and is not intended to provide production-grade cryptographic security.

## ⚙️ Features

* Encrypt text files
* Decrypt encrypted files
* User-defined encryption key
* Input validation
* File opening/error handling
* Menu-driven console interface
* Separate encryption and decryption functions

##  Technologies Used

* **C++**
* `iostream`
* `fstream`
* `string`

## 🔄 How It Works

```text
Original File
     ↓
Encryption
     ↓
Encrypted File
     ↓
Decryption
     ↓
Original Content
```

## Example

### Original File

```text
Hello, this is my first C++ security project!
I am learning file handling and encryption.
```

### Encryption

The program takes a key between `1–25` and transforms alphabetic characters using the selected key.

### Decryption

The same key is used to reverse the transformation and recover the original content.

## Concepts Practiced

* Functions
* Conditional statements
* Loops
* File handling
* `ifstream`
* `ofstream`
* Strings
* Character manipulation
* Input validation
* Basic encryption concepts

## Future Improvements

* Better CLI interface
* Object-oriented design
* STL integration
* Password-based key generation
* Binary file support
* Stronger cryptographic approach
* Improved error handling
* More comprehensive testing

## Author

**Vaibhav Shrivastav**

BTech Undergraduate | C++ | DSA | Software Development
