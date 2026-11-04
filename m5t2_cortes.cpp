// CSC 134
// M5T2 - More Practice with Functions
// Kelly Cortes Ortega
// Partner: GitHub Copilot
// 11/4/26

#include <iostream>
using namespace std;

void printAnswerLine(int number, int squared);

// Function prototypes
int square(int num);

int main() {
    // Print the number 1 to 10 and their sqaures.
    int count = 1;
    int result;
    while (count <= 10) {
        result = square(count);
        printAnswerLine(count, result);
        count++;
    }
    for (int i = 1; i <= 10; i++) {
        // TODO: call square(i) and store the result in a variable
        // TODO: call printAnswerLine () with i and that variable
    }
    return 0;
}

// Return the square of num.
int square(int num) {
    return num * num;
}

// Print one line of the answer, for example: 3 squared is 9
void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}