#include <iostream>
#include <cctype> // For character handling functions like isupper() and islower()
using namespace std;

int main() {
    // Declare a variable to store the character input by the user
    char cr;
    // Prompt the user to enter a character
    cout << "Enter a character: ";
    cin >> cr;

    // Check if the character is uppercase
    if (isupper(cr)) {
        cout << cr << " is in uppercase." << endl;
    } 
    // Check if the character is lowercase
    else if (islower(cr)) {
        cout << cr << " is in lowercase." << endl;
    }
    // If it's neither uppercase nor lowercase (e.g., number or symbol)
    else {
        cout << "Please enter a valid character" << endl;
    }
    return 0;
}
