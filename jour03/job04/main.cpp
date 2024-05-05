#include <iostream>
#include <string>

std::string laPlateforme(){
    std::string sentence = "Vive la plateforme !";
    return sentence;
}

int main() {
    std::string phrase = laPlateforme();
    int caractères = phrase.length();
    std::cout << "La taille est : " << caractères << std::endl;

    return 0;
}