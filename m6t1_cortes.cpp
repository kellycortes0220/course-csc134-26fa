/*
CSC 134
M6T1 - Loops and Arrays
Kelly Cortes Ortega
11/17/26

Do the same thing with while and for loops, for reference.
*/

#include <iostream>
#include <string>
// Function Declarations
void part1();
void part2();

// main
int main() {
    part1();
    part2();

    return 0;
}

// function definitions
void part1() {
    // Method one - no arrays
    // Count cars for each weekday, then get the total and average.
    const int SIZE = 5;
    int count = 0;
    int cars_today;
    int cars_total = 0;

    std::cout << "Part 1: Count cars (no arrays)" << std::endl;
    while (count < SIZE) {
        switch (count) {
            case 0: std::cout << "Monday: "; break;
            case 1: std::cout << "Tuesday: "; break;
            case 2: std::cout << "Wednesday: "; break;
            case 3: std::cout << "Thursday: "; break;
            case 4: std::cout << "Friday: "; break;
        }
        std::cin >> cars_today;
        cars_total += cars_today;
        count++; // Move to next day
    }
    std::cout << "Weekly total = " << cars_total << std::endl;
    std::cout << "Daily average = " << static_cast<double>(cars_total) / SIZE << std::endl << std::endl;
}

void part2() {
    // Part 2 stores each day's car count in an array.
    const int SIZE = 5;
    const std::string days[SIZE] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int cars[SIZE];
    int cars_total = 0;

    std::cout << "Part 2: Count cars and graph the week" << std::endl;
    for (int i=0; i < SIZE; i++) {
        std::cout << days[i] << ": ";
        std::cin >> cars[i];
    }

    std::cout << "\nCars by day" << std::endl;
    std::cout << "Day\t\tCars\tChart" << std::endl;
    for (int i=0; i < SIZE; i++) {
        std::cout << days[i] << "\t\t" << cars[i] << "\t";
        for (int car = 0; car < cars[i]; car++) {
            std::cout << '*';
        }
        std::cout << std::endl;
        cars_total += cars[i];
    }
    std::cout << "Weekly total = " << cars_total << std::endl;
    std::cout << "Daily average = " << static_cast<double>(cars_total) / SIZE << std::endl;
}