// CSC 134
// M3LAB1 - Simple game program
// Kelly Cortes Ortega
// 10/8/26

// This program is a simple text-based game where the player encounters a no-faced man and must choose to run or shoot.

#include <iostream>
#include <string>
using namespace std;

// Function declarations for the choices the player can make.

void chooseRun();
void chooseShoot();

int main() {
  
  // this program will ask a question and respond to it.

  string choice; 

  // Describe the scenerio and ask the question
  cout << "You encounter the no-faced man in the dark woods." << endl;
  cout << "Do you choose to run or shoot him with the shotgun you have?" << endl;
  cout << "Type Run or Shoot: "; 
  cin >> choice;

  if ("Run" == choice) {
    chooseRun();
  }
  else if ("Shoot" == choice) {
    chooseShoot();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0;

}

// Function definitions for the choices the player can make.

void chooseRun() {
  // this function is called in main if the user chooses to run.
  cout << "You chose to Run" << endl;
  cout << "You end up finding a cabin and wait until morning so you can safely escape the woods." << endl;
  cout << "You survive the night and live to tell the tale." << endl;
}

void chooseShoot() {
  // this function is called in main if the user chooses to shoot..
  cout << "You chose to shoot" << endl;
  cout << "The no-faced man immedietely regenarates and uses his shadow powers to swallow you whole." << endl;
  cout << "You are consumed by the darkness and do not survive." << endl;
}