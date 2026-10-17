// CSC 134
// M3BONUS
// Kelly Cortes Ortega
// 10/17/26

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDie() {
	return (rand() % 6) + 1;
}

void battle(int heroHealth, int attackBonus) {
	int dragonHealth = 20;
	int action;

	cout << "\nA dragon blocks the way to the treasure!" << endl;

	while (heroHealth > 0 && dragonHealth > 0) {
		cout << "\nYour health: " << heroHealth
			 << " | Dragon health: " << dragonHealth << endl;
		cout << "Choose an action: 1) Attack  2) Heal" << endl;
		cin >> action;

		while (action != 1 && action != 2) {
			cout << "Choose 1 to attack or 2 to heal: ";
			cin >> action;
		}

		if (action == 1) {
			int damage = rollDie() + attackBonus;
			dragonHealth -= damage;
			cout << "You hit the dragon for " << damage << " damage." << endl;
		}
		else {
			heroHealth += 4;
			if (heroHealth > 20) {
				heroHealth = 20;
			}
			cout << "You heal 4 health. Your health is now " << heroHealth << "." << endl;
		}

		if (dragonHealth > 0) {
			int damage = rollDie() + 2;
			heroHealth -= damage;
			cout << "The dragon hits you for " << damage << " damage." << endl;
		}
	}

	if (heroHealth > 0) {
		cout << "\nYou defeated the dragon and found the treasure. You win, hero!" << endl;
	}
	else {
		cout << "\nYou fell in battle. The dragon keeps the treasure." << endl;
	}
}

int main() {
	int seed = time(0);
	srand(seed);

	string heroName;
	int heroChoice;
	int routeChoice;
	int heroHealth = 20;
	int attackBonus;

	cout << "=== The Dragon's Treasure ===" << endl;
	cout << "What is your hero's name? ";
	cin >> heroName;

	cout << "\nChoose your hero: 1) Warrior  2) Mage" << endl;
	cin >> heroChoice;
	while (heroChoice != 1 && heroChoice != 2) {
		cout << "Choose 1 for Warrior or 2 for Mage: ";
		cin >> heroChoice;
	}

	if (heroChoice == 1) {
		attackBonus = 2;
		cout << "\n" << heroName << " the Warrior sets out with a sturdy sword." << endl;
	}
	else {
		attackBonus = 3;
		cout << "\n" << heroName << " the Mage sets out with a crackling spell." << endl;
	}

	cout << "\nAt a crossroads, which way will you go?" << endl;
	cout << "1) The forest path  2) The cave path" << endl;
	cin >> routeChoice;
	while (routeChoice != 1 && routeChoice != 2) {
		cout << "Choose 1 for the forest or 2 for the cave: ";
		cin >> routeChoice;
	}

	if (routeChoice == 1) {
		attackBonus += 1;
		cout << "\nYou find a shining charm in the forest. Your attacks grow stronger." << endl;
	}
	else {
		heroHealth -= 3;
		cout << "\nA cave trap catches you! You lose 3 health." << endl;
	}

	battle(heroHealth, attackBonus);
	return 0;
}