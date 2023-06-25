Player::Player()
{
	//set initial state
	name = "";
	headLives = nullptr;
	headHappy=nullptr;
	countLives = 0;
	countHappy = 0;
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
void Player::appendLives(int num)
{
	Lives *newLive; //point new Live
	Lives *livePtr; //move through list
	
	//allocate new Live and store num
	newLive = new Lives;
	newLive->lVal = num;
	newLive->nextLives = nullptr;
	
	//if no node yet in the list		
  if(!headLives)
	{
		headLives = newLive;
	}
	else
	{
		//initialise livePtr to head of list
		livePtr = headLives;
		
		//find last live
		while (livePtr->nextLives)
		{
			livePtr = livePtr->nextLives;
		}
			
		//if lives in the list is less than 3
		if(countLives < 3)
		{
			livePtr->nextLives = newLive;
			countLives++;
		}
		else //if live reach 3 already
		{
			cout << "Max amount of Lives reach.\n";
	  }
	}
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
	
	/*if(!checkPlayerStatus())
	{
		cout << "YOU DIED" << endl;
		gameOver
	}*/
}
void Player::displayLives()
{	
  cout << "You have " << countLives << " lives left.\n";
}
bool Player::checkPlayerStatus()
{
	bool status;
	if(!headLives && countLives == 0)
	{
		return false;
	}
}
void Player::gameOver()
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
void Player::displayHappiness()
{
	cout << "You have " << countHappy << " happiness.\n";
}
void Player::happinessCount()
{
	if(countHappy >= 5)
	{
		//TrueEnding();
	}
	else
	{
		return;
	}
}
