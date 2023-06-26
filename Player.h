#include<iostream>
#include<string>

using namespace std;

class Player
{
	private:
		string name;
		struct Lives
		{
			int lVal;
			struct Lives *nextLives;
		};
		Lives *headLives;
		int countLives;
		struct Happiness
		{
			int hVal;
			struct Happiness *nextHappy;
		};
		Happiness *headHappy;
		int countHappy;
	public:
		Player();
    		~Player();
    		void getName(string);
    		string setName();
		int getLives();
		void deleteLives();
		int getHappiness();
		//bool checkPlayerStatus();
		void appendHappiness(int);
		//void happinessCount();
};
    
