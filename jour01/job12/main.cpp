#include <iostream>

int main()
{
    int N, M, P, Q, R;
    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;
    std::cout << "Entrez la valeur de M : ";
    std::cin >> M;
    std::cout << "Entrez la valeur de P : ";
    std::cin >> P;
    std::cout << "Entrez la valeur de Q : ";
    std::cin >> Q;
    std::cout << "Entrez la valeur de R : ";
    std::cin >> R;


    int average = (N + M + P + Q + R) / 5;

    std::cout << "La moyenne des 5 nombres est : " << average << std::endl;
    
}