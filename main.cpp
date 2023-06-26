#include <iostream>
#include "Player.h"
#include "Item.h"
#include "Game.h"
#include "Script.h"

using namespace std;

int main() 
{
	Player player;
	Item item;
    	Script script;
	Game game;
	int choose;
	
	cout << "Welcome to...\n";
	cout << "-----------------------------\n";
	cout << "Feline: Far From Home\n";
	cout << "-----------------------------\n";
	cout << "1.Start\n2.Continue Progress\n3.How To Play\n4.Credits\n5.Quit\n";
	cout << "-----------------------------\n";
	cin >> choose;

	while(choose != 1 || choose != 2 || choose != 3 || choose != 4 || choose != 5)
	{
		cout << "Enter only number from 1 to 4: ";
		cin >> choose;
	}
	switch(choose)
	{
		case 1:
		{
			game.startGame();
			break;
		}
		case 2:
		{
			int choice;
			cout << "Do you wish to continue your past progress?\n";
			cout << "1.Yes\n2.No\n3.delete past progress\n";
			cin >> choice;

			while(choice != 1 || choice != 2 || choice != 3)
			{
				cout << "Input number from 1 to 3: ";
				cin >> choice;
			}

			if(choice == 1)
				game.loadProgress();
			else if(choice == 2)
			{
				cout << "Returning to Main Menu...\n";
			}
			else
			{
				game.deleteProgress();
			}

			break;
		}
		case 3:
		{
			//how to play
			break;
		}
		case 4:
		{
			cout << "Game Developers: \n";
			cout << "Khoo Iu Wan\nLoo Jia Xin\nRaziqin Husna Binti Abdul Wahid\n";
			cout << "Special Thanks to: \n";
			cout << "Dr. Teh Je Sen\nDr Nur Hana Samsudin\nDr Siti Hazyanti Mohd Hashim\n";
			break;
		}
		case 5:
		{
			game.quitGame();
			break;
		}
	}
	
}
