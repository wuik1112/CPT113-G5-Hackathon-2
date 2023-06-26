#include <iostream>
#include<string>
#include "Player.h"

using namespace std;

Player::Player()
{
	//set initial state
	name = "";
	countLives = 3;
	countHappy = 0;
}
Player::~Player()
{
	name = "";
	countLives = 0;
	countHappy = 0;
}
void Player::getName(string n)
{
	name = n;
}
string Player::setName()
{
	return name;
}
void Player::deleteLives()
{
	//lose lives
	countLives--;
}
int Player::getLives()
{
	return countLives;
}
/*bool Player::checkPlayerStatus()
{
	bool status;
	if(!headLives && countLives == 0)
	{
		return false;
	}
}*/
void Player::appendHappiness(int num)
{
	countHappy++;
}
int Player::getHappiness()
{
	return countHappiness;
}
/*void Player::happinessCount()
{
	if(countHappy >= 5)
	{
		//TrueEnding();
	}
	else
	{
		return;
	}
}*/
