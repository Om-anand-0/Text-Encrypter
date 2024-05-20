#include <iostream>
#include <string>

std::string encryptText(std::string text, int shift) {
    std::string encryptedText = "";
    for (char c : text) {
        encryptedText += (c + shift);
    }
    return encryptedText;
}

std::string decryptText(std::string text, int shift) {
    std::string decryptedText = "";
    for (char c : text) {
        decryptedText += (c - shift);
    }
    return decryptedText;
}

int main() {
    std::string text;
    int shift;
    bool option;

    std::cout << "Do you want to encrypt or decrypt?" << std::endl;
    std::cout << "Enter 1 for encrypt, 0 for decrypt: ";
    std::cin >> option;

    if (option) {
        std::cout << "Enter the text to be encrypted: ";
        std::cin >> text;

        std::cout << "Enter the shift value: ";
        std::cin >> shift;

        std::string encryptedText = encryptText(text, shift);

        std::cout << "Encrypted text: " << encryptedText << std::endl;
    } else {
        std::cout << "Enter the text to be decrypted: ";
        std::cin >> text;

        std::cout << "Enter the shift value: ";
        std::cin >> shift;

        std::string decryptedText = decryptText(text, shift);

        std::cout << "Decrypted text: " << decryptedText << std::endl;
    }

    return 0;
}