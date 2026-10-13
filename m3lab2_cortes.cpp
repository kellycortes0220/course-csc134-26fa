// CSC 134
// M3LAB2 Number Grade to Letter Grade
// Kelly Cortes Ortega
// 10/12/2026

// This program will convert numerical grades into letter grades

#include <iostream>
using namespace std;

int main() {
    // Prompt the user for a numerical grade
    double grade;
    cout << "Enter a numerical grade: ";
    cin >> grade;

    // Determine the letter grade based on the numerical grade
    // Check if the grade is valid (between 0 and 100)
    if (grade < 0 || grade > 100) {
        cout << "Please enter a grade from 0 to 100.\n";
    } else if (grade >= 90) {
        cout << "Letter grade: A\n";
    } else if (grade >= 80) {
        cout << "Letter grade: B\n";
    } else if (grade >= 70) {
        cout << "Letter grade: C\n";
    } else if (grade >= 60) {
        cout << "Letter grade: D\n";
    } else {
        cout << "Letter grade: F\n";
    }

    return 0;
}