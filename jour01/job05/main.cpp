# include <iostream>

int main()
{
    int N;
    int M;

    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;
    std::cout << "Entrez la valeur de M : ";
    std::cin >> M;
    std::cout << N << "x" << M << "=" << N * M << std::endl;
    return 0;
}