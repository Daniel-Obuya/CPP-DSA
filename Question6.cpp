#include <iostream>
using namespace std;

int main () {
    // Declare an array of size 5 to store user inputs
    int arr[5];

    // Variable to store the sum of all elements (initialized to 0)
    double sum = 0;

    // Input values
    for (int i = 0; i < 5; i++){
        cout <<"Enter value "<< i + 1 << ":";
        cin >> arr[i];
    }

   // Loop to calculate the sum of all array elements
    for (int i = 0; i<5; i++){
        sum += arr[i];
    }
    // Calculate the average of the values
    double average = sum / 5.0;
    cout << "The average if the values is:"<< average << endl;
    return 0;
}
