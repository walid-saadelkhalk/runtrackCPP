#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point pointInstance;

    pointInstance.x = 5;
    pointInstance.y = 10;

    std::cout << "Valeur de x : " << pointInstance.x << std::endl;
    std::cout << "Valeur de y : " << pointInstance.y << std::endl;
    
    Point *ptr = &pointInstance;

    ptr->x = 15;
    ptr->y = 20;

    std::cout << "Nouvelle valeur de x : " << pointInstance.x << std::endl;
    std::cout << "Nouvelle valeur de y : " << pointInstance.y << std::endl;

    return 0;
}
