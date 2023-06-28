#include <iostream>
#include "Player.h"
#include "Item.h"
#include "Game.h"
#include "Script.h"

using namespace std;

int main()
{
	// call the constructors to initialize all the features
	Player player;
	Item item;
	Script script;
	Game game;
	// variable to hold the choice of player in main menu
	int choose;

	// Main menu
	cout << "Welcome to...\n";
	cout << "-----------------------------\n";
	cout << "Feline: Far From Home\n";
	cout << "-----------------------------\n";
	cout << "1.Start\n2.Continue \n3.How To Play\n4.Credits\n5.Quit\n";
	cout << "-----------------------------\n";
	cout << "Please enter your choice: ";
	cin >> choose;

	// player can choose 1 to 5
	while(choose < 1 || choose > 5)
	{
		cout << "Enter only number from 1 to 5: ";
		cin >> choose;
	}
	switch(choose)
	{
		case 1:
		{
			// call the function to start game
			game.startGame();
			break;
		}
		case 2:
		{
			int choice;
			// confirmation of player's choice
			cout << "Do you wish to continue your past progress?\n";
			cout << "1.Yes\n2.No (delete past progress)\n3. Back to main menu\n";
			cout << "Please enter your choice: ";
			cin >> choice;

			// input validation
			while(choice < 1 || choice > 3)
			{
				cout << "Input number from 1 to 3: ";
				cin >> choice;
			}

			if(choice == 1)
				// choose to continue game and load previous progress
				game.loadProgress();
			else if(choice == 2)
			{
				// delete the content in progress.txt
				game.deleteProgress();
			}
			else
			{
				cout << "Returning to Main Menu...\n";
				// function to return to main menu
				game.backToMainMenu();
			}

			break;
		}
		case 3:
		{
			ifstream inputFile("Gameplay.txt");

    			if (inputFile.is_open()) {
        			string line;
        			while (getline(inputFile, line))
				{
            			cout << line << endl;
        		}
        		inputFile.close();
    			} else {
        			cout << "Unable to open the gameplay file." << endl;
    			}
			getchar();
			cout << "Returning to Main Menu...\n";
			game.backToMainMenu();
			break;
		}
		case 4:
		{
			// Credits of contributor of the game
			cout << "CREDITS\n";
			cout << "--------------------\n";
			cout << "Game Developers: \n";
			cout << "Khoo Iu Wan\nLoo Jia Xin\nRaziqin Husna Binti Abdul Wahid\n";
			cout << "Special Thanks to: \n";
			cout << "Dr. Teh Je Sen\nDr Nur Hana Samsudin\nDr Siti Hazyanti Mohd Hashim\n";
			cout << "-----*------*-------*------*-------*------*------*------\n";
			cout << "All Gratitude Toward OYEN For Game Inspiration!!\n";
			cout << "-----*------*-------*------*-------*------*------*------\n\n";
			cout << "Do you want to back to main menu?\n";
			cout << "1. Yes\n2. No\n";
			cout << "Please enter your choice: ";
			cin >> choose;
			while (choose != 1 && choose != 2){
				cout << "Invalid choice.\n";
				cout << "Please reenter your choice: ";
				cin >> choose;
			}
			if (choose == 1){
				// function to return to main menu
				game.backToMainMenu();
			}
			else if (choose == 2){
				game.quitGame();
			}

			break;
		}
		case 5:
		{
			// call the function to quit game
			game.quitGame();
			break;
		}
	}

	return 0;
}
