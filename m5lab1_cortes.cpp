#include <iostream>
#include <limits>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Kelly Cortes Ortega
11/4/26
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_follow_lullaby();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  int choice;
  while (true) {
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";

    if (!(cin >> choice)) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "That's not a valid choice, please try again." << endl;
      continue;
    }

    if (1 == choice) {
      choice_front_door();
      return;
    } else if (2 == choice) {
      choice_back_door();
      return;
    } else if (3 == choice) {
      choice_go_home();
      return;
    } else if (4 == choice) {
      cout << "Ok, quitting game" << endl;
      return; // go back to main()
    } else {
      cout << "That's not a valid choice, please try again." << endl;
    }
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  cout << "3. Follow a soft lullaby" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else if (3 == choice) {
    choice_follow_lullaby();
  }
}

void choice_back_door() {
  cout << "You sneak around back and find the door unlocked." << endl;
  cout << "You enter the house successfully." << endl;
}

void choice_go_home() {
  cout << "You decide the house is way too spooky and head home." << endl;
}

void choice_follow_lullaby() {
  cout << "You follow a soft melody upstairs to a dusty music box." << endl;
  cout << "The music stops, and a soft whisper in the air says, 'Thank you for finding me.'" << endl;
  cout << "Do you:" << endl;
  cout << "1. Wind the music box" << endl;
  cout << "2. Close it and leave" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;

  if (1 == choice) {
    cout << "The melody returns, and a hidden drawer opens with an old silver key." << endl;
  } else if (2 == choice) {
    cout << "You close the music box and quietly leave the room." << endl;
  } else {
    cout << "You hesitate, and the music box falls silent." << endl;
  }
}