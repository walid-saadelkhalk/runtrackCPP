#include <iostream>
#include <vector>
#include <string>

bool palindrome(const std::string& str) {
    int start = 0;
    int end = str.length() - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    std::vector<std::string> tab = {"radar", "hello", "lvel", "stats", "world"};

    std::cout << "Les palindromes dans le tableau sont : ";
    for (const std::string& word : tab) {
        if (palindrome(word)) {
            std::cout << word << " ";
        }
    }

    return 0;
}
