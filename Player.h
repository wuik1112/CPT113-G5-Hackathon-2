#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Game; // forward declaration

class Player
{
	private:
    	Game* game;
		string name;
		int countLives;
		int countHappiness;
	public:
		Player();
    	~Player();
   	 	string getName();
  	  	void setName(string);
		void setLives(int);
		int getLives();
		void deleteLives(int);
		void setHappiness(int);
		int getHappiness();
		void addHappiness(int);
		void checkLives();
};

#endif
