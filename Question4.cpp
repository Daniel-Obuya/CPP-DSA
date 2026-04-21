#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char cr;
    cout << "Enter a character: ";
    cin >> cr;

    if (isupper(cr)) {
        cout << cr << " is in uppercase." << endl;
    } else if (islower(cr)) {
        cout << cr << " is in lowercase." << endl;
    } else {
        cout << "Please enter a valid character" << endl;
    }
    return 0;
}
