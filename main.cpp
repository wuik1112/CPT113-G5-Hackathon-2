int main() 
{
    Game game;
    Script script;
    int num;
    int happiness = 0;
    int currentChapter = 1;
    cout << "Day 1 starts...\n";
    script.day1();
    
    currentChapter = 2;
    cout << "Day 2 starts...\n";
    script.day2();
    
    currentChapter = 3;
    cout << "Day 3 starts...\n";
    script.day3();
	
    currentChapter = 4;
    cout << "Day 4 starts...\n";
    script.day4();
		
    currentChapter = 5;
    cout << "Day 5 starts...\n";
    script.day5();
}
