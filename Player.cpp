#include <iostream>
#include "Player.h"

using namespace std;

Player::Player()
{
	//set initial state
	name = "";
	headHappy=nullptr;
	countHappy = 0;

	//initial 3 lives to player
	head->lVal = 1;
	head->next->lVal = 1;
	head->next->next->lVal = 1;
	countLives = 3;
}
Player::~Player()
{
	//transverse and point to next node of player's lives
	Lives *livePtr;
	Lives *nextLive;
	
	//transverse and point to next node of player's happiness
	Happiness *happyPtr;
	Happiness *nextHappy;
	
	//position pointer at head
	livePtr = headLives;
	happyPtr = headHappy;
	
	//while pointer not at the end of the list, delete node.
	//lives
	while(livePtr != nullptr)
	{
		//save pointer to next node
		nextLive = livePtr->nextLives;
		//delete current node
		delete livePtr;
		//position livePtr at next node
		livePtr = livePtr->nextLives;
	}
	//happiness
  while(happyPtr != nullptr)
	{
		//save pointer to next node
		nextHappy = happyPtr->nextHappy;
		//delete current node
    delete happyPtr;
		//position happyPtr at next node
		happyPtr = nextHappy;
	}
}
void Player::getName(string n)
{
	name = n;
}
string Player::setName()
{
	return name;
}
int Player::getLives()
{
	
}
void Player::deleteLives()
{
	Lives *livePtr;
	
	livePtr = headLives;
	while(livePtr->nextLives != nullptr)
	{
		livePtr = livePtr->nextLives;
	}
	//delete the last node
	delete livePtr;
	countLives--;
}
/*bool Player::checkPlayerStatus()
{
	bool status;
	if(!headLives && countLives == 0)
	{
		return false;
	}
}*/
int Player::getHappiness()
{
	
}
void Player::appendHappiness(int num)
{
	Happiness *newHappy; //point new Happiness
	Happiness *happyPtr; //move through list
	
	//allocate new Happiness and store num
	newHappy = new Happiness;
	newHappy->hVal = num;
	newHappy->nextHappy = nullptr;
	
	//if no node yet in the list
	if(!headHappy)
	{
		headHappy = newHappy;
	}
	else
	{
		//initialise happyPtr to head of list
		happyPtr = headHappy;
		
		//find last happiness
		while (happyPtr->nextHappy)
		{
			happyPtr = happyPtr->nextHappy;
		}
		
		happyPtr->nextHappy = newHappy;
		countHappy++;
	}
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
