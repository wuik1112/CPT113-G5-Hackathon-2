int main() 
{
    Game game;
    Item food;
    Item coin;
    int num;
    int happiness = 0;
    int currentChapter = 1;
    cout << "Day 1 starts...\n";
    game.Day1PartA();
    cout << "1. Eat the burger.\n2. Throw away the burger.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	cout << "You enjoy the food...kinda\n";
    	cout << "Happiness+5\n";
    	happiness += 5;
	}
	getchar();
    
    game.Day1PartB();
    cout << "1. Take the coin.\n2. Leave it.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	coin.push();
	cout << "Coin+1\n";
	}
	getchar();
    
    game.Day1PartC();
    cout << "1. Give him the coin.\n2. Just listen to the music quietly.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	coin.pop();
	cout << "Coin-1\n";
	}
	getchar();
    
    game.Day1PartD();
    cout << "1. Accept the duel.\n2. Beg them for mercy and negotiate.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	lives = lives - 1;
    	cout << "Lives-1\n";
	player.checkLives();
	}
	getchar();
    
    game.Day1PartE();
    cout << "1. Accept the food.\n2. Hiss at him and run away.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	food.push();
	}
	getchar();
    
    game.Day1PartF();
    cout << "1. Share the shelter.\n2.Ignore the black cat.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	lives = lives -1;
    	cout << "He is grateful but -1 live for you because it was cramped and you barely survive the cold night.\n";
	player.checkLives();
	}
	getchar();
    
    currentChapter = 2;
    cout << "Day 2 starts...\n";
    game.Day2PartA();
    cout << "1. Take the coin. \n2. Leave it.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	coin.push();
    	cout << "Coin+1\n";
	}
	getchar();
    
    game.Day2PartB();
    cout << "1. Give him the coin. \n2. Just listen to the music quietly.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	coin.pop();
    	cout << "Coin-1\n";
	}
	getchar();
    
    game.Day2PartC();
    cout << "1. Accept the food. \n2. Hiss at him and run away.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	food.push();
    	cout << "Food+1\n";
	}
	getchar();
    
    game.Day2PartD();
    if (food.isEmpty()) {
    	cout << "Oh no! You don't have enough food for the cats.\n";
    	cout << "The cats seem angry to you. They decide to give you some punishments.\n";
    	cout << "You have lost 3 lives.\n";
    	lives = lives-3;
	player.checkLives();
	}
    
    else {
    	food.pop();
    	cout << "You give them the food and they looks very happy.";
	}
	getchar();
	
    game.Day2PartE();
    
    currentChapter = 3;
    cout << "Day 3 starts...\n";
    game.Day3PartA();
    cout << "1. Accept the food.\n2. You really dislike him so you run away\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	food.push();
	}
	getchar();
    
    game.Day3PartB();
    if (food.isEmpty()) {
    	cout << "They realised you didn't bring any food. You were warned.\n";
    	cout << "Lives-3\n";
    	lives = lives-3;
	player.checkLives();
	}
    
    else {
    	food.pop();
    	cout << "You give them the food and they tell you some good news.";
	}
	getchar();
	
	game.Day3PartC();
	
	currentChapter = 4;
	cout << "Day 4 starts...\n";
	game.Day4PartA();
	cout << "1. Investigate.\n2. Ignore it and walk away.\n";
	cout << "Please enter your choice: ";
	cin >> num;
	while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
		
	if (num == 1) {
		game.Day4PartB();
		cout << "1. Tell the old man.\n2. You think that you might be wrong. So you don't tell the old man.\n";
		cout << "Please enter your choice: ";
		cin >> num;
		if (num == 1) {
			game.Day4PartC();
			cout << "1. Accept the offer and follow the old man back to his home.\n2. You reject the old man and run away.\n";
			cout << "Please enter your choice: ";
			cin >> num;
			if (num == 1) {
				game.ending1();
				return 0;
			}
		}
	}
	else if (num == 2){
		cout << "You didn't find anything today.\n";
		cout << "You decide to find a place to rest and continue searching for clues tomorrow\n";
		getchar();
	}
		
	
	currentChapter = 5;
	cout << "Day 5 starts...\n";
	game.Day5PartA();
	cout << "1. Give him the card.\n2. Throw away the card into the sewer.\n";
	cout << "Please enter your choice: ";
	cin >> num;
	while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
	if (num == 2) {
		game.ending3();
		return 0;
	}
	
	game.Day5PartB();
	game.ending2();
	return 0;
}
