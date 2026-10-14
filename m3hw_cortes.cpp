// CSC 134
// M3HW1 - Gold
// Kelly Cortes Ortega
// 10/14/26

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// This program will have 4 different codes for four different questions

int main() {
    // Question 1
    // This program will have a simple "chat bot" 
    cout << "Question 1" << endl;
    // Question 1 code goes here
    string answer;

    cout << "Hello! I'm a C++ program!" << endl;
    cout << "Do you like me? (yes or no) ";

     // Display the user's answer in bold
    cin >> answer;
    cout << "\033[1m" << answer << "\033[0m" << endl;

    // Check the answer and respond accordingly
    if (answer == "yes") {
        cout << "Yay! I'm glad you like me!" << endl;
    } else if (answer == "no") {
        cout << "Oh no! I'm sorry to hear that." << endl;
    } else {
        cout << "I didn't understand your answer." << endl;
    }

    // Question 2
    // This program will function as a receipt calculator
    // It will ask the user for the price of an item and the quantity purchased, then calculate the total cost and display it to the user
    // It will print the meal price, the tax, the tip (if any), and the total amount due
    cout << "Question 2" << endl;
    // Question 2 code goes here
    // Declare our variables
    string item = "🌮 Taco";
    double item_price = 5.99; // price of the item in $
    double tax_percent = 0.08; // 8% is 8/100
    double tax_amount;         // tax in $
    double tip_amount = 0.0;   // tip in $
    double total;              // price + tax
    string meal_type;

    // Greet user and take the order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;
    cout << "The price of your meal is $" << item_price << "." << endl;
    cout << "Enter the price of your meal: $";
    cin >> item_price;
    cout << "Is this dine-in or takeout? (dine-in/takeout): ";
    cin >> meal_type;

    // Calculate the meal price
    // Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent; // take 8% of the item
    if (meal_type == "dine-in") {
        tip_amount = item_price * 0.15;
    }
    total = item_price + tax_amount + tip_amount;



    // Print the receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "------------------------------" << endl;
    cout << item << "\t\t$" << item_price      << endl;
    cout << "Tax" << "\t\t$" << tax_amount     << endl;
    cout << "Tip" << "\t\t$" << tip_amount     << endl;
    cout << "------------------------------" << endl;
    cout << "Total" << "\t\t$" << total << endl;
    cout << endl;


    return 0;
}
