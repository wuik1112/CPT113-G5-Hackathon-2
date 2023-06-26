#include <iostream>
#include "Player.cpp"
#include "Game.cpp"
#include "Script.cpp"
#include "DayList.cpp"

using namespace std;

int main() 
{
	int choose;
	
	cout << "Welcome to...\n";
	cout << "-----------------------------\n";
	cout << "Feline: Far From Home\n";
	cout << "-----------------------------\n";
	cout << "1.Start\n2.How To Play\n3.Credits\n4.Quit\n";
	cout << "-----------------------------\n";
	cin >> choose;

	while(choose != 1 || choose != 2 || choose != 3 || choose != 4)
	{
		cout << "Enter only number from 1 to 4: ";
		cin >> choose;
	}
	switch(choose)
	{
		case 1:
		{
			Player player;
    			Game game;
    			Script script;
    			DayList daylist;
			string name;
			int proceed;
			do
			{
				cout << "Please enter your name or preferred nickname: ";
				getline(cin, name);
				cout << "*-----*------*-----*-----*-----*-----*\n";
				cout << "Name: " << name << endl;
				cout << "Do you want to proceed?\n1.Yes\n2.No\n";
				cin << proceed;
			}while(proceed != 1);

			player.setName(name);
			
    			int currentChapter = 1;
    			cout << "Day 1 starts...\n";
    			script.day1();
    			daylist.addDay(&Script::day1);
    			
    			currentChapter = 2;
    			cout << "Day 2 starts...\n";
    			script.day2();
    			daylist.addDay(&Script::day2);
    
    			currentChapter = 3;
    			cout << "Day 3 starts...\n";
    			script.day3();
    			daylist.addDay(&Script::day3);
    	
    			currentChapter = 4;
    			cout << "Day 4 starts...\n";
    			script.day4();
    			daylist.addDay(&Script::day4);
		
    			currentChapter = 5;
    			cout << "Day 5 starts...\n";
    			script.day5();
    			daylist.addDay(&Script::day5);
			break;
		}
		case 2:
		{
			//how to play
		}
		case 3:
		{
			cout << "Game Developers: \n";
			cout << "Khoo Iu Wan\nLoo Jia Xin\nRaziqin Husna Binti Abdul Wahid\n";
			cout << "Special Thanks to: \n";
			cout << "Dr. Teh Je Sen\nDr Nur Hana Samsudin\nDr Siti Hazyanti Mohd Hashim\n";
		}
		case 4:
		{
			exit(0);
		}
	}
	
}
