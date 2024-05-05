#include <iostream>

int tableau[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){
    int *ptr = tableau;
    int addPairs = 0;
    for (int i = 0; i < 10; i++){
        if (i % 2 == 0){
            addPairs += *(ptr + i);
        }
    }
    std::cout << "La somme des elements d'index pair du tableau est: " << addPairs << std::endl;
    return 0;
}