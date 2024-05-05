#include <iostream>

int main(){
    int n = 17;
    double x = 3.14;
    float f = 123.345;
    std::string c = "La Plateforme";

    int *ptr_n = &n;
    double *ptr_x = &x;
    float *ptr_f = &f;
    std::string *ptr_c = &c;

    std::cout << "Adresse de n : " << ptr_n << std::endl;
    std::cout << "Valeur de n : " << *ptr_n << std::endl;

    std::cout << "Adresse de x : " << ptr_x << std::endl;
    std::cout<< "Valeur de x : " << *ptr_x << std::endl; 

    std::cout << "Adresse de f : " << ptr_f << std::endl;
    std::cout << "Valeur de f : " << *ptr_f << std::endl;

    std::cout << "Adresse de c : " << ptr_c << std::endl;
    std::cout << "Valeur de c : " << *ptr_c << std::endl;
}
