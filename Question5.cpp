#include <iostream>
using namespace std;

int main () {
    // Declare variable x to store the accumulated result (starting from 0
    double x = 0;
    // Initialize y with starting value 20
    int y = 20;
    // Do-while loop runs at least once before checking condition
    do {
        // Reduce y by 4 in each iteration
        y -= 4;
        // Add the value of 2.0 divided by current y to x
        // 2.0 ensures decimal (floating point) division
        x += 2.0 / y;
    } while (y >= 6); // Continue looping while y is greater than or equal to 6

    // Display the final computed value of x
    cout << x << endl;

    return 0;
}
