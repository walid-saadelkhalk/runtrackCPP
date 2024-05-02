#include <iostream>

using namespace std;

 void printHello() {
    cout << "Hello, World!" << endl; 
}

int temperature(int temp) {
    return temp;
}

int farenheit(int temp) {
    int fare = temperature(temp);
    double result = (fare * 1.8) + 32.0;
    return result;
}

int main() {
    printHello();
    cout << "Temperature en Celsius : " << temperature(20) << endl;
    cout << "Temperature en Farenheit : " << farenheit(20) << endl;
    return 0;
}  



