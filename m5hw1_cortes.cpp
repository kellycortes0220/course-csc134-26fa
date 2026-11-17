// CSC 134
// M5HW1 - Gold
// Kelly Cortes Ortega
// 11/16/26

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

void question_1();
void question_2();
void question_3();
void question_4();
void question_5();

double get_positive_dimension(const string& dimension) {
    double value;
    while (true) {
        cout << "Enter the block's " << dimension << ": ";
        if (cin >> value && value > 0) {
            return value;
        }

        cout << "Please enter a number greater than zero." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

double get_nonnegative_measurement(const string& measurement) {
    double value;
    while (true) {
        cout << "Enter " << measurement << ": ";
        if (cin >> value && value >= 0) {
            return value;
        }

        cout << "Please enter a number that is not negative." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void question_1() {
    cout << "Question 1: Average Rainfall" << endl;
    string months[3];
    double rainfall[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter the name of month " << i + 1 << ": ";
        cin >> months[i];
        cout << "Enter the amount of rain for " << months[i] << " (in inches): ";
        cin >> rainfall[i];
    }

    double average = (rainfall[0] + rainfall[1] + rainfall[2]) / 3;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << months[0] << ", " << months[1]
         << ", and " << months[2] << " is " << average << " inches." << endl;
}

void question_2() {
    cout << "\nQuestion 2: Block Volume" << endl;
    double width = get_positive_dimension("width");
    double length = get_positive_dimension("length");
    double height = get_positive_dimension("height");
    double volume = width * length * height;
    cout << "The volume of the block is " << volume << " cubic units." << endl;
}

void question_3() {
    cout << "\nQuestion 3: Roman Numeral" << endl;
    int number;
    while (true) {
        cout << "Enter a whole number from 1 through 10: ";
        if (!(cin >> number)) {
            cout << "Please enter a whole number from 1 through 10." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (number < 1 || number > 10) {
            cout << "The number must be from 1 through 10." << endl;
            continue;
        }

        switch (number) {
            case 1: cout << "I" << endl; break;
            case 2: cout << "II" << endl; break;
            case 3: cout << "III" << endl; break;
            case 4: cout << "IV" << endl; break;
            case 5: cout << "V" << endl; break;
            case 6: cout << "VI" << endl; break;
            case 7: cout << "VII" << endl; break;
            case 8: cout << "VIII" << endl; break;
            case 9: cout << "IX" << endl; break;
            case 10: cout << "X" << endl; break;
        }
        break;
    }
}

void question_4() {
    cout << "\nQuestion 4: Geometry Calculator" << endl;
    while (true) {
        cout << "\nGeometry Calculator" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option (1-4): ";

        int choice;
        if (!(cin >> choice)) {
            cout << "Please enter a number from 1 through 4." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Enter a number from 1 through 4." << endl;
            continue;
        }

        if (choice == 4) {
            return;
        } else if (choice == 1) {
            double radius = get_nonnegative_measurement("the circle's radius");
            double area = 3.14159 * radius * radius;
            cout << "The circle's area is " << area << endl;
        } else if (choice == 2) {
            double length = get_nonnegative_measurement("the rectangle's length");
            double width = get_nonnegative_measurement("the rectangle's width");
            cout << "The rectangle's area is " << length * width << endl;
        } else {
            double base = get_nonnegative_measurement("the triangle's base");
            double height = get_nonnegative_measurement("the triangle's height");
            cout << "The triangle's area is " << base * height * 0.5 << endl;
        }
    }
}

void question_5() {
    cout << "\nQuestion 5: Vehicle Distance Traveled" << endl;
    double speed = get_nonnegative_measurement("the vehicle's speed in miles per hour");

    int hours;
    while (true) {
        cout << "Enter the number of hours traveled (at least 1): ";
        if (cin >> hours && hours >= 1) {
            break;
        }

        cout << "Please enter a whole number of hours that is at least 1." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double total_distance = speed * hours;
    cout << "\nHour\tDistance Traveled" << endl;
    int hour = 1;
    while (true) {
        cout << hour << "\t" << speed * hour << " miles" << endl;
        if (hour == hours) {
            break;
        }
        ++hour;
    }

    
}

int main() {
    cout << fixed << setprecision(2);
    while (true) {
        cout << "\nM5HW1 - Gold Menu" << endl;
        cout << "1. Average Rainfall" << endl;
        cout << "2. Block Volume" << endl;
        cout << "3. Roman Numeral" << endl;
        cout << "4. Geometry Calculator" << endl;
        cout << "5. Vehicle Distance Traveled" << endl;
        cout << "6. Exit" << endl;
        cout << "Choose an option (1-6): ";

        int choice;
        if (!(cin >> choice)) {
            cout << "Invalid input. Enter a number from 1 through 6." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1:
                question_1();
                break;
            case 2:
                question_2();
                break;
            case 3:
                question_3();
                break;
            case 4:
                question_4();
                break;
            case 5:
                question_5();
                break;
            case 6:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Enter a number from 1 through 6." << endl;
        }
    }

    return 0;
}