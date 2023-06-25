#include <iostream>
#include <fstream> // multiple file inclusion
#include <string> 
#include <Player.h> // To save and load the player info from text file
#include <Item.h>
#include <Game.h>
#include <Script.h>

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
	Player player; // call the constructor of player class to initialize all value to null
	Item item; //call the constructor of item class to initialize all value to null
	Script script; // call the constructor of script class to initialize all value to null
	
	cout << "Welcome to our game, 'Kitty: Far From Home'. " << endl;
	getchar(); 
}


//Save progress to text file
void Game::saveProgress(int currentChapter)
{
	// open the text file to write in
    ofstream outputFile("progress.txt");

	if (outputFile.is_open()) {
		// write the current chapter to text file
        outputFile << currentChapter << endl ;
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
    string currentChapter;

    if (inFile.is_open()) 
	{
        int current;
		
		// the last line in the progress.txt is the latest progress
        while (getline(inFile, current)) 
		{
            currentChapter = current;
        }

        inFile.close();
    } else {
        cout << "Failed to load the progress." << endl;
    }

	cout << "Your latest progress is in Chapter " << currentChapter << endl;
	//according to the current chapter, display the current chapter
	switch (currentChapter)
	{
		case 1: getDay1();
		case 2: getDay2();
		case 3: getDay3();
		case 4: getDay4();
		case 5: getDay5();
	}
		
	// after display the current chapter, delete the content in text file to prevent future confusion
	deleteProgress();
}

void Game::deleteProgress()
{
	// overwrite the content with empty
	ofstream deleteFile("progress.txt", ofstream::out | ofstream::trunc);

    if (file.is_open()) 
	{
        file.close();
    	cout << "Progress deleted. " << endl;
    } else
    	cout << "Failed to delete the progress. " << endl;
}

// Quit the game
void Game::quitGame()
{
	cout << "Quiting the game..." << endl;
	// Automatically save the progress before quiting the game
	saveProgress();
	cout << "Game exited. " << endl;
} 
