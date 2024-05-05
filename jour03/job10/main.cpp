#include <iostream>
#include <string>
#include <algorithm>

bool compare(char a, char b)
{
    return std::tolower(a) < std::tolower(b);;
}


int main()
{
    std::string string;
    std::cout << "Entrer une phrase: ";
    std::getline(std::cin, string);
    std::cout << string << std::endl;

    std::string string2 = "Bonjour";
    std::cout << string2 << std::endl;
    std::string result = string + string2;
    std::cout << result << std::endl;

    std::sort(result.begin(), result.end(), compare);
    std::cout << result << std::endl;


    return 0;
}
