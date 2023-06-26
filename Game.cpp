#include <iostream>
#include <fstream> // multiple file inclusion
#include <string> 
#include "Game.h"
#include "Player.h"
#include "Script.h"

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
	
	cout << "Welcome to our game, \"Feline: Far From Home\". " << endl;
	getchar(); 
	cout << "This is a story about a kitten lost its owner." << endl
	     << "You need to make decision for each condition to help the kitten reunites with its owner. " << endl;

	cout << "Please give a name for this kitten: " << endl; 
	getline(cin, name);
	player.setName(name);

	cout << "Now, you are the kitten, " << player.getName() << ". " << endl;
	cout << "Here are your current information: " << endl;
	cout << "Your Lives: " << player.getLives() << endl;
	cout << "Your Happiness: " << player.getHappiness() << endl;
	getchar();
	cout << "Enjoy your journey! " << endl;

	script.day1();
}


//Save progress to text file
void Game::saveProgress(script.getCurrentChapter())
{
	// open the text file to write in
    ofstream outputFile("progress.txt");

	if (outputFile.is_open()) {
		// write the player info into the file
		outputFile << player.getName() << endl;
		outputFile << player.getLives() << endl;
		outputFile << player.getHappiness() << endl;
		// write the items hold by player into the file
		outputFile << item.getCoinCount() << endl;
		outputFile << item.getFoodCount() << endl;
		outputFile << item.getCardCount() << endl; 
		// write the current chapter to text file
        	outputFile << script.getCurrentChapter() << endl; 
		
		outputFile.close();  // Close the text file
        
		cout << endl << "Progress saved successfully! " << endl;
    
	} else {
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
		while (cin >> num) 
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
	} else {
		cout << "Failed to load the progress." << endl;
	}

	cout << "Your latest progress is in Chapter " << script.getCurrentChapter() << endl;
	//according to the current chapter, display the current chapter
	switch (script.getCurrentChapter())
	{
		case 1: day1();
		case 2: day2();
		case 3: day3();
		case 4: day4();
		case 5: day5();
	}
		
	// // after display the current chapter, delete the content in text file to prevent future confusion
	// deleteProgress();
}

// void Game::deleteProgress()
// {
// 	// overwrite the content with empty
// 	ofstream deleteFile("progress.txt", ofstream::out | ofstream::trunc);

//     if (file.is_open()) 
//     {
//         file.close();
//     	cout << "Progress deleted. " << endl;
//     } else
//     	cout << "Failed to delete the progress. " << endl;
// }

// Ask player to continue or quit game
void Game::continueGame()
{
	// variable that hold player's choice
	int num = 0;
	
	// Ask if he would like to continue
	cout << "Do you want to continue to next chapter?\n";
	cout << "1. Yes\n2. No (Quit)\n";
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

	// save or exit program based on player choice
	switch (num)
	{
		case 1:
			saveProgress(script.getCurrentChapter());
		case 2: 
			quitGame();
	}
}

// Quit the game
void Game::quitGame()
{
	cout << "Quiting the game..." << endl;
	// Automatically save the progress before quiting the game
	saveProgress(script.getCurrentChapter());
	// Exit the program
	exit(0);
	cout << "Game exited. " << endl;
} 
