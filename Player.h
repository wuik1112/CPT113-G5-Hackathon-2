#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Game; // forward declaration

class Player
{
	private:
    		Game* game; // to use function in game class

		string name; // variable to store player's name
		int countLives; // variable to store the current number of lives
		int countHappiness; // variable to store the current happiness

	public:
		// Constructor
		Player(); 
		// Destructor
    		~Player();

		// to hold the name inputted by player
  	  	void setName(string);
		string getName();

		// to hold the lives of cat in the game
		void setLives(int);
		int getLives();
		// decrease lives when player make choice to decrease lives
		void deleteLives(int);
		// check if cat used up the lives, if yes, game over
		void checkLives();

		// to hold the value of happiness of cat
		void setHappiness(int);
		int getHappiness();
		// to increase the happiness if player make choice that make cat happy
		void addHappiness(int);
};

#endif
