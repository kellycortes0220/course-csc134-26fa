// CSC 134
// M4LAB
// Kelly Cortes Ortega
// 10/21/26

#include <iostream>
using namespace std;

int main() {
    cout << "M4LAB\n";
    // declare variables
    int height, width;

    // start with a set size
    // to finish, use variable sizes, by asking the user
    //height = 5;
    //width = 5;
    cout << "How tall should the block be?" << endl;
    cin >> height;
    cout << "How wide should the block be?" << endl;
    cin >> width;

    // test: make a row of asterisks
    cout << "One row" << endl;
    for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout<< endl; //finish the row

    // test: make a column
    cout << "One column" << endl;
    for (int j=0; j < height; j++) {
        cout << "*" << endl;
    }

    // instead of printing a column,
    // we want to print a row within the outer loop
    // (nested loops)
    cout << "The entire block" << endl;
    for (int j=0; j < height; j++) {
        // print one row
        for (int i=0; i< width; i++) {
            cout << "*" << " ";
        }
        cout << endl; // end the row with a newline
    }
}