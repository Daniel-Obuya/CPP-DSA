#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int radius;
    cout << "Enter the radius: ";
    cin >> radius;

    double volume = (4.0/3.0) * M_PI * pow(radius, 3);
    cout << "The volume of the sphere is " << volume << endl;

    return 0;
}
