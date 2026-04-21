#include <iostream>
#include <cmath> // For mathematical functions like pow() and M_PI
using namespace std;

int main(){
    int radius;
    // Prompt the user to enter the radius
    cout << "Enter the radius: ";
    cin >> radius;

    // Calculate the volume of a sphere using the formula:
    // Volume = (4/3) * π * r^3
    double volume = (4.0/3.0) * M_PI * pow(radius, 3);
    // Display the calculated volume
    cout << "The volume of the sphere is " << volume << endl;

    return 0;
}
