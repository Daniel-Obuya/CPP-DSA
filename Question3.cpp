#include <iostream>
using namespace std;

int main() {
    // Declare variable to store the side length of the square
    double side;

    // Ask the user to input the side length
    cout << "Enter the side length of the square: ";
    cin >> side;

    // Calculate the area of the square using formula: side × side
    double area = side * side;
     // Calculate the perimeter of the square using formula: 4 × side
    double perimeter = 4 * side;

    // Display the calculated area
    cout << "Area: " << area << endl;
    // Display the calculated perimeter
    cout << "Perimeter: " << perimeter << endl;
    
    return 0;
}
