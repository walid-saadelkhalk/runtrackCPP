#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(4) << " ";
    for (int i = 1; i <= 10; ++i) {
        cout << setw(4) << i;
    }
    cout << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << setw(2) << i << " |";
        for (int j = 1; j <= 10; ++j) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}
