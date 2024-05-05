#include <iostream>
#include <variant>
#include <vector>

int main() {
    std::vector<std::variant<int, double, std::string>> mixedArray;

    mixedArray.push_back(2019);
    mixedArray.push_back("La Plateforme");
    mixedArray.push_back(3.14);
    mixedArray.push_back("Etudiants");

    std::vector<void*> ptrArray;

    for (auto& element : mixedArray) {
        if (auto intValue = std::get_if<int>(&element)) {
            ptrArray.push_back(&(*intValue)); 
        } else if (auto doubleValue = std::get_if<double>(&element)) {
            ptrArray.push_back(&(*doubleValue)); 
        } else if (auto stringValue = std::get_if<std::string>(&element)) {
            ptrArray.push_back(&(*stringValue)); 
        }
    }

    for (auto ptr : ptrArray) {
        std::cout << "Adresse : " << ptr << std::endl;
        std::cout << "Valeur : " << *static_cast<int*>(ptr) << std::endl;
    }

    return 0;
}
