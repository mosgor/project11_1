#include <iostream>
#include <string>

std::string encrypt_caesar(std::string text, int key) {
    for (int i = 0; i < text.length(); ++i) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] += char(key);
            if (text[i] < 'A') text[i] = 'Z' + (text[i] - 'A') % 26 + 1;
            text[i] = (text[i] - 'A') % 26 + 'A';
        }
        else if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] += char(key);
            if (text[i] < 'a') text[i] = 'z' + (text[i] - 'a') % 26 + 1;
            text[i] = (text[i] - 'a') % 26 + 'a';
        }
    }
    return text;
}

std::string decrypt_caesar(std::string text, int key) {
    return encrypt_caesar(text, -key);
}

int main() {
    std::cout << "Input text: ";
    std::string text;
    std::getline(std::cin , text);
    std::cout << "Input key: ";
    int key;
    std::cin >> key;
    std::cout << "Available functions: \n1. Encryption\n2. Decryption" << std::endl;
    std::cout << "Choose function that you need: ";
    int choice;
    std::cin >> choice;
    if (choice == 1){
        std::cout << "Encrypted one: " << encrypt_caesar(text, key) << std::endl;
    }
    else if (choice == 2){
        std::cout << "Decrypted one: " << decrypt_caesar(text, key) << std::endl;
    }
    else std::cout << "Incorrect choice" << std::endl;
}

//проба гита
