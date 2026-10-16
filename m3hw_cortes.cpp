// CSC 134
// M3HW1 - Gold
// Kelly Cortes Ortega
// 10/16/26

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

void chooseRun(string& second_choice);
void chooseShoot();
void chooseRunning();
void chooseHide();

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

    // Question 3
    // This program will create a simple "Choose your own adventure" game
    // It will offer the user a choice of two options
    // One answer will lead to a game over and the other will lead to a second choice of two actions
    // One answer will lead to defeat and the other will lead to victory
    cout << "Question 3" << endl;
    // Question 3 code goes here
    // this program will ask a question and respond to it.

    string choice;
    string second_choice; 

    // Describe the scenerio and ask the question
    cout << "You encounter the no-faced man in the dark woods." << endl;
    cout << "Do you choose to run or shoot him with the shotgun you have?" << endl;
    cout << "Type Run or Shoot: "; 
    cin >> choice;

    // Check the answer and respond accordingly
if (choice == "Run") {
    chooseRun(second_choice);

    if (second_choice == "Continue") {
        chooseRunning();  // defeat
    } else if (second_choice == "Hide") {
        chooseHide();     // victory
    } else {
        cout << "I'm sorry, that is not a valid choice." << endl;
    }
} else if (choice == "Shoot") {
    chooseShoot();        // game over
} else {
    cout << "I'm sorry, that is not a valid choice." << endl;
}

    // Question 4
    cout << "Question 4" << endl;
    // This program will generate two random numbers and ask the user to add them together
    // It will then check the user's answer and respond accordingly
    // Question 4 code goes here

    int num1, num2, user_answer;
    srand(time(0));

    num1 = rand() % 100 + 1;
    num2 = rand() % 100 + 1;

    cout << "What is " << num1 << " + " << num2 << "? ";
    cin >> user_answer;

    cout << "\033[1m" << user_answer << "\033[0m" << endl;

    int correct_answer = num1 + num2;
    if (user_answer == correct_answer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect. The correct answer is "
             << correct_answer << "." << endl;
    }

}

// Function definitions for the choices the player can make.
// Each function prints the outcome of the choice made by the player.
void chooseRun(string& second_choice) {
        // This function is called if the user chooses to run.
        cout << "You chose to Run" << endl;
        cout << "You end up finding a cabin." << endl;
        cout << "Do you choose to continue running or hide in the cabin?" << endl;
        cout << "Type Continue running or Hide: ";
        cin >> second_choice;
}

void chooseRunning() {
        // This function is called if the user chooses to continue running.
        cout << "You chose to continue to run." << endl;
        cout << "Since you are still in the no-face man's domain, he catches up to you and you are consumed by his darkness." << endl;
        cout << "You are turnt into one of his followers by force." << endl;
        cout << "You have been defeated." << endl;
}

void chooseHide() {
        // This function is called if the user chooses to hide.
        cout << "You chose to hide in the cabin and secure all doors and windows." << endl;
        cout << "You wait until morning to attempt escaping the dark forest again." << endl;
        cout << "You escape the dark woods successfully and live to tell the tale!" << endl;
        cout << "You have survived. Victory! Yay!" << endl;
}

void chooseShoot() {
        // This function is called if the user chooses to shoot.
        cout << "You chose to shoot" << endl;
        cout << "The no-faced man immedietely regenarates and uses his shadow powers to swallow you whole." << endl;
        cout << "You are consumed by the darkness and do not survive." << endl;
        cout << "Game over" << endl;
}