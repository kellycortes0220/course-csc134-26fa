// CSC 134
// M4T1
// Kelly Cortes Ortega
// 10/20/26


#include <iostream>
using namespace std;
  
int main() {
    // program 5-3
    // Using a simple while loop
    // Remember we start counting from zero.

    int number = 5;

    int i = 0;
    while (i < number) {
        cout << "Hello" << endl;
        //i = i + 1;
        i++; // shorter version of the above line
    }
    cout << "That's all!" << endl;

    // program 5-6
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;
    // print a table header
    // "\t" is useful for formatting (the tab key)
    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {
        // notice here we start at 1,
        // and stop at 10 because of <=
        // (< would stop at 9)
        cout << num << "\t" << num * num << endl;
        // as we see, if we don't increase num,
        // it will run forever...
        num++;
    }

}