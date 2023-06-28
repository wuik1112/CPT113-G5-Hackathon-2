#ifndef SCRIPT_H
#define SCRIPT_H

#include <iostream>
#include "Player.h"
#include "Item.h"
//#include "Game.h"

using namespace std;

const int MAX_HAPPINESS = 30;

class Game;

class Script
{
	private:
		Player player;
		Game* game;
		Item item;
		
		int ending;
		int currentChapter;
  	        int num;

	public:
		// Constructor
		Script();
		// Destructor
		~Script();
		
		void setEnding(int end);
		int getEnding();
		
		// to record the chapter ongoing
		void setCurrentChapter(int currentChapter);
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
};

#endif
