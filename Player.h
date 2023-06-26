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
		void setLives(int);
		int getLives();
		void deleteLives(int);
		void setHappiness(int);
		int getHappiness();
		void addHappiness(int);
		void checkLives();
};
    
