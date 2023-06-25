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
    void appendLives(int);
    void deleteLives();
    void displayLives();
    bool checkPlayerStatus();
    void gameOver();
    void appendHappiness(int);
    void displayHappiness();
    void happinessCount();
};
    
