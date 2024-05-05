#include <iostream>
#include <string>

std::string sentences() {
    std::string sentenceOne;
    std::string sentenceTwo;

    std::cout << "Entrez une première phrase : ";
    std::getline(std::cin, sentenceOne);

    std::cout << "Entrez une deuxième phrase : ";
    std::getline(std::cin, sentenceTwo);

    return (sentenceOne == sentenceTwo) ? "Les phrases sont identiques." : "Les phrases ne sont pas identiques.";
}

int main() {
    std::cout << sentences() << std::endl;
    return 0;
}
