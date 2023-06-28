#include <iostream>
#include <fstream> // multiple file inclusion
#include <string>
#include "Game.h"
#include "Player.h"
#include "Script.h"
#include "Item.h"

using namespace std;

//Constructor
Game::Game()
{

}

Game::~Game()
{

}



//Start a new game
void Game::startGame()
{
	string name;

	cout << endl << "Welcome to our game, \"Feline: Far From Home\". " << endl;
	getchar();
	cout << "This is a story about a kitten lost its owner." << endl
	     << "You need to make decision for each condition to help the kitten reunites with its owner. " << endl << endl;

	cout << "Please give a name for this kitten: ";
	getline(cin, name);
	player.setName(name);

	cout << "Now, you are the kitten, " << player.getName() << ". " << endl << endl;
	cout << "Here are your current information: " << endl;
	cout << "Your Lives: " << player.getLives() << endl;
	cout << "Your Happiness: " << player.getHappiness() << endl;
	getchar();
	cout << "Enjoy your journey! " << endl;

	saveProgress();

	script.day1();
}



//Save progress to text file
void Game::saveProgress()
{
	// open the text file to write in
	ofstream outFile("progress.txt");

	if (outFile.is_open())
	{
		// write the player info into the file
		outFile << player.getName() << endl;
		outFile << player.getLives() << endl;
		outFile << player.getHappiness() << endl;
		// write the items hold by player into the file
		outFile << item.getCoinCount() << endl;
		outFile << item.getFoodCount() << endl;
		outFile << item.getCardCount() << endl;
		// write the current chapter to text file
    		outFile << script.getCurrentChapter() << endl;

		outFile.close();  // Close the text file

		cout << endl << "Progress saved successfully! " << endl;

	} else 
	{
        cout << endl << "Failed to save the progress." << endl;
    	}
}

// Load progress from text file
void Game::loadProgress()
{
	ifstream inFile("progress.txt");

	if (inFile.is_open())
	{
        	string data;
		int num;
		getline(inFile, data);
		player.setName(data);
		int i = 1;
		while (inFile >> num)
		{
			switch (i)
			{
				case 1:
				{
					player.setLives(num);
					break;
				}
				case 2:
				{
					player.setHappiness(num);
					break;
				}
				case 3:
				{
					for (int i=0; i<num; i++)
						item.PushCoin();
					break;
				}
				case 4:
				{
					for (int i=0; i<num; i++)
						item.PushFood();
					break;
				}
				case 5:
				{
					for (int i=0; i<num; i++)
						item.PushCard();
					break;
				}
				case 6:
				{
					script.setCurrentChapter(num);
					break;
				}
			}
		i++;
		}
		inFile.close();
	} else 
	{
		cout << "Failed to load the progress." << endl;
	}

	cout << "Your latest progress is in Chapter " << script.getCurrentChapter() << endl;
	//according to the current chapter, display the current chapter
	switch (script.getCurrentChapter())
	{
		case 1:
		{
			script.day2();
			break;
		}
		case 2:
		{
			script.day3();
			break;
		}
		case 3:
		{
			script.day4();
			break;
		}
		case 4:
		{
			script.day5();
			break;
		}
	}
}

void Game::deleteProgress()
{
	// overwrite the content with empty
	ofstream deleteFile("progress.txt", ofstream::out | ofstream::trunc);

	if (deleteFile.is_open())
     	{
        deleteFile.close();
	    	cout << "Progress deleted. " << endl;
     	} else
     		cout << "Failed to delete the progress. " << endl;
}



// Ask player to continue or quit game
void Game::continueGame()
{
	// variable that hold player's choice
	int num = 0;

	// Ask if he would like to continue
	cout << "Do you want to continue to next chapter?\n";
	cout << "1. Yes\n2. No (Back to main menu)\n";
	cout << "Please enter your choice: ";
	// player input
	cin >> num;

	// input validation for player's choice
	while (num != 1 && num != 2)
	{
		cout << "Invalid choice.\n";
		cout << "Please reenter your choice: ";
		cin >> num;
	}

	//save or exit program based on player choice
	switch (num)
	{
		case 1:
		{
			return;
			break;
		}
		case 2:
		{
			backToMainMenu();
			break;
		}
	}
}

// Quit the game
void Game::quitGame()
{
	cout << "Quiting the game..." << endl;
	// Automatically save the progress before quiting the game
	saveProgress();
	cout << "Game exited. " << endl;
	// Exit the program
	exit(0);
}



// Back to main menu
void Game::backToMainMenu()
{
	cout << "Welcome to...\n";
	cout << "-----------------------------\n";
	cout << "Feline: Far From Home\n";
	cout << "-----------------------------\n";
	cout << "1.Start\n2.Continue \n3.How To Play\n4.Credits\n5.Quit\n";
	cout << "-----------------------------\n";
	cout << "Please enter your choice: ";
	cin >> num;

	// player can choose 1 to 5
	while(num < 1 || num > 5)
	{
		cout << "Enter only number from 1 to 5: ";
		cin >> num;
	}
	switch(num)
	{
		case 1:
		{
			// call the function to start game
			startGame();
			break;
		}
		case 2:
		{
			int choice;
			// confirmation of player's choice
			cout << "Do you wish to continue your past progress?\n";
			cout << "1.Yes\n2.No (delete past progress)\n3. Back to main menu\n";
			cin >> num;

			// input validation
			while(num < 1 || num > 3)
			{
				cout << "Input number from 1 to 3: ";
				cin >> num;
			}

			if(num == 1)
				// choose to continue game and load previous progress
				loadProgress();
			else if(num == 2)
			{
				// delete the content in progress.txt
				deleteProgress();
			}
			else
			{
				cout << "Returning to Main Menu...\n";
				// function to return to main menu
				backToMainMenu();
			}

			break;
		}
		case 3:
		{
			//how to play
			ifstream inputFile("Gameplay.txt");

    			if (inputFile.is_open())
			{
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
			backToMainMenu();
			break;
		}
		case 4:
		{
			// Credits of contributor of the game
			cout << "Game Developers: \n";
			cout << "Khoo Iu Wan\nLoo Jia Xin\nRaziqin Husna Binti Abdul Wahid\n";
			cout << "Special Thanks to: \n";
			cout << "Dr. Teh Je Sen\nDr Nur Hana Samsudin\nDr Siti Hazyanti Mohd Hashim\n";
			cout << "All Gratitude Toward OYEN For Game Inspiration!!\n\n";
			cout << "Do you want to back to main menu?\n";
			cout << "1. Yes\n2. No\n";
			cout << "Please enter your choice: ";
			cin >> num;
			while (num != 1 && num != 2)
			{
				cout << "Invalid choice.\n";
				cout << "Please reenter your choice: ";
				cin >> num;
			}
			if (num == 1)
			{
				// function to return to main menu
				backToMainMenu();
			}
			else if (num == 2)
			{
				quitGame();
			}
			break;
		}
		case 5:
		{
			// call the function to quit game
			quitGame();
			break;
		}
	}
}
