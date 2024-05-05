#include <iostream>
#include <string>
#include <cctype>

std::string printMessage(){
    std::string sentence = "vive la plateforme";
    std::cout << sentence << std::endl;
    return sentence;
}

int main(){
    std::string sentence = printMessage();
    for (int i = 0; i < sentence.size(); i++){
        sentence[i] = toupper(sentence[i]);
    }   
    std::cout << sentence << std::endl;
    return 0;
}