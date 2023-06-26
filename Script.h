#include <iostream>
#include <Player.h>
#include <Game.h>

using namespace std;

class Script
{
	private:
		Player player;
		Game game;
		Item food;
		Item coin;
		Item card;
		int *ending; 
		
	public:
		// Constructor
		Script();
		// Destructor
		~Script();
		void setEnding(int end);
		int getEnding();
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
