#include <iostream>
#include <string>

std::string printMessage(){
    std::string sentence = "vive la plateforme";
    return sentence;
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main() {
    std::string sentence = printMessage();
    std::string result;
    
    for (char c : sentence) {
        if (!isVowel(c)) {
            result += c;
        }
    } 
    std::cout << result << std::endl;
    return 0;
}