#include <iostream>
#include "Player.cpp"
#include "Game.cpp"
#include "Script.cpp"
#include "DayList.cpp"

using namespace std;

int main() 
{
    Player player
    Game game;
    Script script;
    DayList daylist;
    int num;
    int happiness = 0;
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
}
