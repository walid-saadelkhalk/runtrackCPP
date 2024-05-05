#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int tableau[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tableau2[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    std::vector<int> tableau3;
    for (int i = 0; i < 10; i++){
        tableau3.push_back(tableau[i]);
        tableau3.push_back(tableau2[i]);
    }
    std::sort(tableau3.begin(), tableau3.end());
    for (int i = 0; i < tableau3.size(); i++){
        std::cout << tableau3[i]<< " ";
    }
}