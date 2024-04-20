#include <iostream>
#include <string>

int modInverse(int a, int m) {
    a = a % m;
    for (size_t i{1}; i < m; i++)
        if ((a * i) % m == 1)
            return i;
    return -1;
}


std::string* encrypted(const std::string& m, int k[]) {
    std::string message = m;
    for (auto& c : message) {
        c = std::toupper(c);
    }
    size_t size = message.size();
    
    std::string* encrypt = new std::string();
    std::string alpha {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    size_t pos;
    for (size_t i{0}; i < size; i++) {
        if (message[i] != ' ') {
            pos = alpha.find(message[i]);
            int middle = (k[0] * pos + k[1]) % 26;
            *encrypt += alpha[middle];
        } else {
            *encrypt += ' ';
        }
    }
    return encrypt;
}

std::string* decrypted(const std::string& m, int k[]) {
    std::string message = m;
    size_t size = message.size();
    
    std::string* decrypt = new std::string();
    std::string alpha {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    size_t pos;
    for (size_t i{0}; i < size; i++) {
        if (message[i] != ' ') {
            pos = alpha.find(message[i]);
            int middle = modInverse(k[0], 26) * (pos - k[1]) % 26;
            *decrypt += alpha[middle];
        } else {
            *decrypt += ' ';
        }
    }
    return decrypt;
}

int main() {
    std::string message;
    int k[2];

    std::cout << "Please enter a key k(a, b): ";
    std::cin >> k[0] >> k[1];
    std::cout << "Please enter a message: ";
    std::cin.ignore();
    getline(std::cin, message);
    
    std::string* resultEncrypt = encrypted(message, k);
    std::string* resultDecrypt = decrypted(*resultEncrypt, k);
    
    std::cout << "Encrypted: " << *resultEncrypt << std::endl;
    std::cout << "Decrypted: " << *resultDecrypt << std::endl;

    delete resultEncrypt;
    delete resultDecrypt;
    
    return 0;
}