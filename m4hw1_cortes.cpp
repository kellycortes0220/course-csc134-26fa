// CSC 134
// M4HW1 - Gold
// Kelly Cortes Ortega
// 10/27/26

// This program prompts the user to enter a number from 1 to 12 and then displays the multiplication table for that number.
#include <iostream>
#include <limits>
using namespace std;

int main() {

    int firstNum, answer;
    while (true) {
        cout << "Enter a number from 1 to 12: ";
        if (cin >> firstNum) {
            if (firstNum >= 1 && firstNum <= 12) {
                break;
            }
        } else {
            if (cin.eof()) {
                return 1;
            }
            cin.clear();
        }
        cout << "Please enter a whole number from 1 to 12." << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    // Display the multiplication table for the entered number
    for (int i=1; i<=12; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
    }
}