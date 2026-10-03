/*
CSC 134
M2HW1 - Gold
Kelly Cortes Ortega
10/3/26
*/

// We will create a program
// that will have 4 questions.
// The first question will be
// a Banking Transaction Simulator
// This program should be able to
// stimulate basic account banking transactions
#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;

int main(){

    // Set up all variables
    string first_name, last_name, full_name; // holds account holder's name
    string bank = "Firewood";
    double account_number = 18245;
    double starting_account_balance = 1000;
    double amount_of_deposit;
    double amount_of_withdrawal;
    double final_account_balance;


    // Greet the account holder
    cout << "Welcome to " << bank << "'s Banking Transactions." << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Hello, " << full_name << endl;

    // Tell the account holder's starting balance
    cout << "Your current balance is " << starting_account_balance << " dollars" << endl;

    // Ask the account holder's banking transactions
    cout << "How much will you be depositing today? ";
    cin >> amount_of_deposit;
    cout << "How much will you be withdrawing today? ";
    cin >> amount_of_withdrawal;

    // Calculate the account holder's final account balance
    final_account_balance = starting_account_balance + amount_of_deposit - amount_of_withdrawal;

    // Show the account number to the holder
    cout << "Account Number: " << account_number << endl;

    // Formatting: Set all numbers to 2 decimal places
    cout << setprecision(2) << fixed;

    // Give the result to the account holder
    cout << "Thank you for your transaction, " << full_name << endl;
    cout << "Your Final Balance is " << final_account_balance << " dollars" << endl;
    cout << "Until next time!" << endl;

// Now onto the second question
// This program is used by General Crates, Inc. to calculate
// the volume, cost, customer charge, and profit of a crate
// of any size. It calculates this data from user input, which
// consists of the dimensions of the crate.
// Constants for cost and amount charge

const double COST_PER_CUBIC_FOOT = 0.30;
const double CHARGE_PER_CUBIC_FOOT = 0.52;

// Variables
double length,  // The crate's length
       width,   // The crate's width
       height,  // The crate's height
       volume,  // The volume of the crate
       cost,    // The cost to build the crate
       charge,  // The customer charge for the crate
       profit;  // The profit made on the crate

// Set the desire output formatting for numbers.
cout << setprecision(2) << fixed << showpoint;

// Prompt the user for the crate's length, width, and height
cout << "Enter the dimensions of the crate (in feet):\n";
cout << "Length: ";
cin >> length;
cout << "Width: ";
cin >> width;
cout << "Height: ";
cin >> height;

// Calculate the crate's volume, the cost to product it,
// the charge to the customer, and the profit.
volume = length * width * height;
cost = volume * COST_PER_CUBIC_FOOT;
charge = volume * CHARGE_PER_CUBIC_FOOT;
profit = charge - cost;

// Display the calculated data.
cout << "The volume of the crate is ";
cout << volume << " cubic feet.\n";
cout << "Cost to build: $" << cost << endl;
cout << "Charge to customer: $" << charge << endl;
cout << "Profit: $" << profit << endl;
return 0; // no errors
}