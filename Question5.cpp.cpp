#include <iostream>
using namespace std;

int main () {
    double x = 0;
    int y = 20;
    
    do {
        y -= 4;
        x += 2.0 / y;
    } while (y >= 6);

    cout << x << endl;

    return 0;
}