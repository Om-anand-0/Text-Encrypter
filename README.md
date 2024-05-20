# Text-Encrypter

Text-Encrypter is a C++ application designed to encrypt and decrypt text using a simple shift-based encryption algorithm. This tool is useful for securing information by converting readable text into an unreadable format and then back to its original form.

## Features

- Encrypts plain text into encrypted text using a shift value.
- Decrypts encrypted text back into plain text using the same shift value.
- Simple and efficient shift-based encryption algorithm.
- Command-line interface for user interaction.

## Getting Started

### Prerequisites

To compile and run Text-Encrypter, you need:

- A C++ compiler (e.g., g++, clang++)

### Installation

1. **Clone the repository:**

   ```sh
   git clone https://github.com/yourusername/Text-Encrypter.git
   cd Text-Encrypter
   ```

2. **Compile the program:**

   ```sh
   g++ -o text-encrypter main.cpp
   ```

3. **Run the program:**

   ```sh
   ./text-encrypter
   ```

## Usage

Text-Encrypter is a command-line tool that requires user input to either encrypt or decrypt text.

### Encrypt Text

1. Run the program:

   ```sh
   ./text-encrypter
   ```

2. Follow the prompt to choose the encryption option.
3. Enter the text you want to encrypt when prompted.
4. Enter the shift value to be used for encryption.
5. The encrypted text will be displayed.

### Decrypt Text

1. Run the program:

   ```sh
   ./text-encrypter
   ```

2. Follow the prompt to choose the decryption option.
3. Enter the text you want to decrypt when prompted.
4. Enter the shift value used for encryption.
5. The decrypted text will be displayed.

## Example

```
$ ./text-encrypter
Do you want to encrypt or decrypt?
Enter 1 for encrypt, 0 for decrypt: 1
Enter the text to be encrypted: HelloWorld
Enter the shift value: 3
Encrypted text: KhoorZruog

$ ./text-encrypter
Do you want to encrypt or decrypt?
Enter 1 for encrypt, 0 for decrypt: 0
Enter the text to be decrypted: KhoorZruog
Enter the shift value: 3
Decrypted text: HelloWorld
```

## Algorithm

The encryption algorithm used in Text-Encrypter is a simple shift-based cipher. Each character in the text is shifted by a specified number of positions in the ASCII table. For decryption, the characters are shifted back by the same number of positions.

## Contributing

Contributions are welcome! If you have suggestions or improvements, please open an issue or submit a pull request.

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature-branch`).
6. Create a new Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions, feel free to contact the project maintainer at [om.d3v.21@gmail.com].

---

Thank you for using Text-Encrypter!
