#include <iostream>
#include <string>

int main() {
    std::string str = "Plateforme";
    std::string *ptr = &str;

    for (auto it = ptr->rbegin(); it != ptr->rend(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;
    return 0;
}
