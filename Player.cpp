#include <iostream>
#include<string>
#include "Player.h"
#include "Game.h"

using namespace std;

Player::Player()
{
	//set initial state
	name = "";
	countLives = 3;
	countHappiness = 0;
}
Player::~Player()
{
	name = "";
	countLives = 0;
	countHappiness = 0;
}
void Player::setName(string n)
{
	name = n;
}
string Player::getName()
{
	return name;
}
void Player::setLives(int lives)
{
	countLives = lives;
}
void Player::deleteLives(int num)
{
	//lose lives
	countLives = countLives - num;
}
int Player::getLives()
{
	return countLives;
}
void Player::setHappiness(int happy)
{
	countHappiness = happy;
}
void Player::addHappiness(int num)
{
	countHappiness = countHappiness + num;
}
int Player::getHappiness()
{
	return countHappiness;
}

// call if player lives less than and equal to 0
void Player::checkLives()
{
	if (countLives <= 0)
	{
		cout << "Unfortunately, you have exhausted all of your lives." << endl;
		cout << "Your journey ends here...Game Over. "<<endl;
		game->quitGame();
	}
}
