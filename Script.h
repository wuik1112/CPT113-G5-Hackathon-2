#include <iostream>
#include "Player.h"
#include "Game.h"

using namespace std;

const int MAX_HAPPINESS = 30;

class Script
{
	private:
		Player player;
		Game game;
		Item food;
		Item coin;
		Item card;
		int *ending; 
		int *currentChapter;
		
	public:
		// Constructor
		Script();
		// Destructor
		~Script();
		void setEnding(int end);
		int getEnding();
		// to record the chapter ongoing
		void setCurentChapter(int currentChapter);
		int getCurrentChapter();
		// to display the corresponding story
		void day1();
		void day2();
		void day3();
		void day4();
		void day5();
		// display the endings depends on player choice
		void ending1();
		void ending2();
		void ending3();
		// if happiness > X, this ending will happen
		void secretEnding();
		// call if player lives less than and equal to 0
		void checkLives();
};
