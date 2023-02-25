// Rhianna Dains
// February 13, 2023
// This is the source code for my text adventure game, "The Cave."

#include <iostream>
using namespace std;

int main ()
{
	// Variables
	string name;
	int exitTheGame, caveEntrance;
	
	// Input
	cout << "Enter your name: ";		
	cin >> name;

	do {
	// Processing
	cout << "Hello " << name << ". Welcome to The Cave!" << endl;
	cout << "Press '1' to start the game. Exit at any time by pressing 0." << endl;
	cin >> exitTheGame;
	cout << endl;
	
	cout << "You stand at the mouth of a large cave which spirals into darkness beyond." << endl;
	cout << "You hold a letter and an unlit lantern." << endl;
	cout << "Press '1' to enter the cave. Press '2' to light your lantern. Press '3' to look around."; 
	cout << endl;
	cin >> caveEntrance;

	if (caveEntrance == 1)
	{
		cout << "Wow! It's dark in here! You trip over a rock and fall off a ledge into an endless pit below." << endl;
		cout << "Game Over." << endl;
		cout << "Press '1' to start over. Exit at any time by pressing 0." << endl;
		cin >> exitTheGame;
	}
	else if (caveEntrance == 2)
	{
		cout << "Done." << endl;
		cout << "Press '1' to enter the cave. Press '2' to blow out your lantern. Press '3' to look around." << endl;
	}
	else if (caveEntrance == 3)
	{
		cout << "There is nothing special about the area." << endl;
		cout << "You stand at the mouth of a large cave which spirals into darkness beyond." << endl;
	}

} while (exitTheGame !=0);

		return 0;
}

