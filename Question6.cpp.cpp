#include <iostream>
using namespace std;

int main () {
    int arr[5];
    double sum = 0;

    // Input values
    for (int i = 0; i < 5; i++){
        cout <<"Enter value "<< i + 1 << ":";
        cin >> arr[i];
    }

    // Calculate the sum
    for (int i = 0; i<5; i++){
        sum += arr[i];
    }

    double average = sum / 5.0;
    cout << "The average if the values is:"<< average << endl;
    return 0;
}