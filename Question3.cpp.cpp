#include <iostream>
using namespace std;

int main() {
    double side;
    cout << "Enter the side length of the square: ";
    cin >> side;

    double area = side * side;
    double perimeter = 4 * side;

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
    
    return 0;
}