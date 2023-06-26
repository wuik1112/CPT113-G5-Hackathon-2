#include<iostream>
#include<string>

using namespace std;

class Player
{
	private:
		string name;
		int countLives;
		int countHappy;
	public:
		Player();
    		~Player();
    		void getName(string);
    		string setName();
		int getLives();
		void deleteLives();
		int getHappiness();
		void addHappiness(int);
		//bool checkPlayerStatus();
		//void happinessCount();
};
    
