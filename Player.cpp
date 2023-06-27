#include <iostream>
#include <string>
#include "Player.h"
#include "Game.h"

using namespace std;

// Constructor to initialize value of player
Player::Player()
{
	//set initial state
	name = "";
	countLives = 3;
	countHappiness = 0;
}

// Destructor to return all value to 0
Player::~Player()
{
	name = "";
	countLives = 0;
	countHappiness = 0;
}



// hold the player name after they input the name
void Player::setName(string n)
{
	name = n;
}

// return the inputted value that stored in name
string Player::getName()
{
	return name;
}



// hold the number of lives left of the cat
void Player::setLives(int lives)
{
	countLives = lives;
}

// return the number of lives that stores in countLives
int Player::getLives()
{
	return countLives;
}

// decrease number of lives when player make choice to decrease lives
void Player::deleteLives(int num)
{
	//lose lives
	countLives = countLives - num;
}

// call if number of lives less than and equal to 0
void Player::checkLives()
{
	if (countLives <= 0)
	{
		cout << "Unfortunately, you have exhausted all of your lives." << endl;
		cout << "Your journey ends here...Game Over. "<<endl;
		game->quitGame();
	}
}



// hold the happiness value of cat
void Player::setHappiness(int happy)
{
	countHappiness = happy;
}

// return the value of happiness
int Player::getHappiness()
{
	return countHappiness;
}

// increase value of happiness if player make a choice that make the cat happy
void Player::addHappiness(int num)
{
	countHappiness = countHappiness + num;
}
