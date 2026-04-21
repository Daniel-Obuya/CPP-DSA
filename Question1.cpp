#include <iostream>
using namespace std;

int main(){
    int days;
    // Take input 
    cout << "Enter the number of days: ";
    cin >> days;
    // Converting hours in days to seconds
    int seconds = days * 24 * 60 * 60;
    cout << "There are " << seconds << " seconds in " << days << " days." << endl;
    return 0;
}

 
