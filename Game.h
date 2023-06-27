#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <fstream> //multiple file inclusion
#include <string>
#include "Script.h" //To save the current chapter and load the previous chapter
#include "Player.h" //To save and load the player info from text file
#include "Item.h" //To save and load the condition of item from text file

using namespace std;

class Game
{
	private:
		// to use the function in Player class
		Player player;
		// to use the function in Item class
		Item item;
		// to use function in Script class
		Script script;
		
		int num;

	public:
		//Constructor
		Game();
		//Destructor
		~Game();
		
		//Start a new game
		void startGame();
		
		//Save progress to text file
		void saveProgress();
		//Load progress from text file
		void loadProgress();
		// Delete progress in text file
		void deleteProgress();
		
		// Ask player if they wanna continue or quit game
		void continueGame();
		//Quit the game
		void quitGame();
		
		// Back to main menu
		void backToMainMenu();
};
#endif
