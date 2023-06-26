#include<iostream>
#include<string>

using namespace std;

class Player
{
	private:
		string name;
		int countLives;
		int countHappiness;
	public:
		Player();
    		~Player();
    		void getName(string);
    		string setName();
		int getLives();
		void deleteLives(int);
		int getHappiness();
		void addHappiness(int);
		void checkLives();
};
    
