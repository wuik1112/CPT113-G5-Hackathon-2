#include <iostream>
#include "Player.h"
#include "Script.h"
#include "Game.h"

using namespace std;

// Constructor
Script::Script()
{
	setEnding(0);
}

// Destructor
Script::~Script()
{
	setEnding(0);
}

//Ending type
void Script::setEnding(int end)
{
	ending = new int(end);
}

int Script::getEnding()
{
	return ending;
}

void Script::day1()
{
	cout << "You wake up from your sleep and you are wondering what are you doing there. Then, you recall what happened yesterday.\n";
	getchar();
	cout << "Your owner, Emily, brought you to the park nearby to play catch. She threw your toy far away and let you ran after it.\n";
	getchar();
	cout << "However, when you came back, she is gone. Where could she be? surely, she just forgotten to bring you with her, right?\n";
	getchar();
	cout << "You decide to find your way home and reunite with Emily. You go through the trash can and found a half-eaten burger.\n";
	getchar();
	cout << "Do you eat the burger?\n";
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
	player.addHappiness(5);
	}
    else
    {
	cout << "You choose to not put that disgusting-looking food in your digestive system.\n";
    }
	getchar();
	cout << "Before starting your adventure, you also found a coin. Do you take the coin?\n";
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
	cout << "You walk out of the alleyway into the busy city. As you walk, you see an old man who is a street performance.\n";
	getchar();
	cout << "As you listen to his music, you cant help but recall the memory of Emily humming the same song as she prepared your food.\n";
	getchar();
	cout << "You walk toward him. Do you give him the coin?\n";
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
	cout << "He is very happy to see a feline offers him a coin. He pats you and you are very happy.\n";
	cout << "Happiness+10\n";
	player.addHappiness(10);
	}
	getchar();
	cout << "You run around and see a strange alleyway. You enter the alleyway in hope to find shelter for the night and maybe some more food.\n";
	getchar();
	cout << "As you are busy rummaging through the trash can, you hear a growl from behind you. It was a Siamese cat with scars all over his body.\n";
	getchar();
	cout << "Then in the shadow, you see more cats surrounding you in that alleyway. Apparently, you have trespassed their boundary.\n";
	getchar();
	cout << "The cats are very angry and the Siamese ask you for a duel. Accept or negotiate?\n";
	 cout << "1. Accept the duel.\n2. Beg them for mercy and negotiate.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
	cout << "You are injured in the fight but you win. Lives-1\n";
	player.deleteLives(1);
	player.checkLives();
	cout << "The stray cats accept their defeat and will listen to your request.\n";
	cout << "You want them to help you find clues to reunite with Emily.\n";
	}
	getchar();
	cout << "They will help you but you need to bring them food every day until they manage to get some information about your owner. You agree to their request.\n";
	getchar();
	cout << "Before you walk away, the stray cats warn you not to approach the black cat.\n";
	getchar();
	cout << "As you wonder why they don't let you to approach the black cat, you encounter a man.\n";
	getchar();
	cout << "He has a soft expression. When he sees you, he smiles happily and offer you food.\n";
	getchar();
	cout << "You sense something a little...strange in him. Accept or not accept the food?\n";
	 cout << "1. Accept the food.\n2. Hiss at him and run away.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	cout << "Food+1\n";
	food.push();
	}
	getchar();
	cout << "After some time, you finally found the best place to rest. It is cramped but at least it is warm enough for you to survive the cold, snowy night.\n";
	getchar();
	cout << "As you are about to fall asleep, you are bothered by a meow. A black cat comes to you to seek shelter. Share the shelter or ignore him?\n";
	cout << "1. Share the shelter.\n2.Ignore the black cat.\n";
    cout << "Please enter your choice: ";
    cin >> num;
    while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
    if(num == 1) {
    	cout << "He is grateful but you lost 1 live because it was cramped and you barely survive the cold night. Lives-1\n";
	player.deleteLives(1);
	player.checkLives();
	}
	getchar();
}


void Script::day2()
{
	cout << "You wake up to see the black cat is nowhere to be found. Good. You've to focus on finding Emily afterall.\n";
	getchar();
	cout << "You are rummaging through the trash can. How lucky, you found another coin. Take or leave it?\n";
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
	cout << "You see the old man again. Today too, the music he plays bring back old memories.\n";
	getchar();
	cout << "You walk to him. Give him the coin or not?\n";
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
	cout << "He is very happy and today, he gives you some food. Food+1, Happiness+10\n";
	food.push();
	player.addHappiness(10);
	}
	getchar();
	cout << "You stroll around and see the strange man again. Today, something is really suspicious with him.\n";
	getchar();
	cout << "He is smiling but it seems like he's also holding back some kind of anger? Hatred? You're unsure of it.\n";
	getchar();
	cout << "He gives you food. Take it or leave it?\n";
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
	cout << "You go all the way to the strange alley in hope for some update on Emily's whereabout.\n";
	getchar();
	cout << "When you enter the alley, the cats look at you and ask you for today's portion of food.\n";
	getchar();
	 if (food.isEmpty()) {
    	cout << "Oh no! You don't have enough food for the cats.\n";
    	cout << "The cats seem angry to you. They decide to give you some punishments.\n";
    	cout << "You have lost 3 lives.\n";
    	player.deleteLives(3);
	player.checkLives();
	}
    
    else {
    	food.pop();
	cout << "Food-1\n";
    	cout << "You give them the food and they looks very happy.";
	}
	getchar();
	cout << "However, they still need some times to find clues. You're a bit disappointed and walk away.\n";
	getchar();
	cout << "You find some shelter to rest that night. You should be happy you're alive but somehow today, you feel so uneasy.\n";
	getchar();
}

void Script::day3()
{
	cout << "You wake up yet to another day in an unfamiliar alley. You are tired and just want to go home.\n";
	getchar();
	cout << "You walk to the street and try to find the sweet old man, but you failed this time.\n";
	getchar();
	cout << "On the contrary, you meet the strange man again. He seems to be throwing a sack of something.\n";
	getchar();
	cout << "What could it be? Hm. You don't bother too much and walk towards him.\n";
	getchar();
	cout << "He sees you and greets you happily. As usual, he gives you some food. Accept it or not?\n";
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
	cout << "Food+1\n";
	}
	getchar();
	cout << "You go to the strange alleyway again. Today, the stray cats appear unusually excited, as if something extraordinary has happened.\n";
	getchar();
	cout << "You don't understand it. But you're happy that they're in a good mood.\n";
	getchar();
	cout << "As usual, they ask you for today's food.\n";
	getchar();
	if (food.isEmpty()) {
    	cout << "They realised you didn't bring any food. You were warned.\n";
    	cout << "Lives-2\n";
    	player.deleteLives(2);
	player.checkLives();
	}
    
    else {
    	food.pop();
	cout << "Food-1\n";
    	cout << "You give them the food and they tell you some good news.";
	}
	getchar();
	cout << "They give you a card. Card+1, Happiness+15\nYou take it and have a look.\n";
	player.addHappiness(15);
	card.push();
	getchar();
	cout << "On the card, there's Emily's face. That's all you understand. You're a cat. You cannot read.\n";
	getchar();
	cout << "But you're happy anyways. This marks the end of your business with the stray cats.\nYou go find a place to rest that night.\n";
	getchar();
}

void Script::day4()
{
	cout << "You're woken up by some weird smell. Investigate or not?\n";
	cout << "1. Investigate.\n2. Ignore it and walk away.\n";
	cout << "Please enter your choice: ";
	cin >> num;
	while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
		
	if (num == 1) {
	cout << "You found out the smell coming from a sack. Wait. Isn't this the sack that the strange man thrown away yesterday? There are some liquid dripping from it.\n"
	getchar();
	cout << "You try to open the sack with your mouth and tiny paw.\n"
	cout << "What you saw shocked you. It's unbelievable. What is happening?\n"
	getchar();
	cout << "Inside the sack is black furs covering in blood. It was... the black cat.\n"
	getchar();
	cout << "All his body parts are cut into pieces. His guts are being pulled out. Why? Why?"
	getchar();
	cout << "Is it really? But how? Who killed him? The strange man?\n"
	getchar();
	cout << "You don't know what to do anymore. Suddenly, you remember the old man. You must go to him... You must seek help.\n"
	getchar();
	cout << "You run toward the sound of music. There you see the old man happily play his instrument.\n";
	getchar();
	cout << "You cry and cry to him. You pull the fabric on his legs ever so gently to make sure you don't hurt him. He sense the urgency and follow you.\n";
	getchar();
	cout << "You showed him the corpse of the black cat. He is as shocked as you. He takes out his phone, and call the police.\n";
	getchar();
	cout << "As the police arrives, they confirm that they have gotten a lot of report regarding of crimes against black cats in that area.\n";
	getchar();
	cout << "The old man sigh and ask you if you know anything. You remember about the strange man. Tell the old man or not?\n";
		cout << "1. Tell the old man.\n2. You think that you might be wrong. So you don't tell the old man.\n";
		cout << "Please enter your choice: ";
		cin >> num;
		if (num == 1) {
			cout << "You meow to the old man to follow you. You lead to the place the strange man always hanging out.\n";
			getchar();
			cout << "You see the man. You're about to rush at him and scratch him so hard that he would bleed to death. The old man tries his best to chase after you despite being left behind.\n";
			getchar();
			cout << "Before you could do anything, the strange man catches you. He smiles at you.\n";
			getchar();
			cout << "He said: You again little kitty. Y'know you should be lucky you're born with this pretty golden fur. It's a sign of wealth. Not like those dumb black cats.\n";
			getchar();
			cout << "They only bring bad luck toward us. Don't you agree?\n";
			getchar();
			cout << "The old man said: I heard you. I hear everything. How could you? What the little cats do to you?\n";
			getchar();
			cout << "The strange man replied: Huh??? Do I need to explain that, stupid old man??? Don't you see? I am saving us all from the bad fortune about to fall upon us!\n";
			getchar();
			cout << "Before they both could do anything, the police also catch up to us.\n";
			getchar();
			cout << "The old man told the police everything and the man is arrested. The man cuss out words to all of us and all we could do is watch.\n";
			getchar();
		}
		cout << "Today is tiring. You did not expect that at all. You could not believe the world that you live in is so cruel.\n";
		getchar();
		cout << "The old man pat you. This place is too dangerous. He offers to bring you home. Accept or not accept?\n";
		cout << "1. Accept the offer and follow the old man back to his home.\n2. You reject the old man and run away.\n";
		cout << "Please enter your choice: ";
		cin >> num;
		if (num == 1) {
			ending1();
		}
	}
	else if (num == 2){
		cout << "You didn't find anything today.\n";
		cout << "You decide to find a place to rest and continue searching for clues tomorrow\n";
		getchar();
	}
}

void Script::day5()
{
	cout << "You wake up again. This time in different alley. You are too traumatized from yesterday event.\n";
	getchar();
	cout << "You are about to go find food. You look back and saw the card. Oh yea. You forgot to find Emily yesterday. You take the card with you.\n";
	getchar();
	cout << "You see the old man again. You want to seek for his help. But now a thought came to your mind.\n";
	getchar();
	cout << "It has been days. What if... Emily just doesn't want you anymore?\n";
	getchar();
	cout << "What if that's the truth? She left you because she decided to abandoned you and here you are trying to go back to her.\n";
	getchar();
	cout << "If you come back, she'll be very angry.\n";
	getchar();
	cout << "You think for a while. Do you give the card to him?\n";
	cout << "1. Give him the card.\n2. Throw away the card into the sewer.\n";
	cout << "Please enter your choice: ";
	cin >> num;
	while (num != 1 && num != 2) {
			cout << "Invalid choice.\n";
			cout << "Please enter your choice: ";
			cin >> num;
		}
	if (num == 2) {
		ending3();
	}
	card.pop();
	cout << "He looks at the card and immediately understand. He knows you want to meet the person on the card.\n";
	getchar();
	cout << "He carries you all the way to your old home. The more he walks, the familiar the scenery.\n";
	getchar();
	cout << "The pet shop that Emily went to, the scary vet clinic and the street that Emily always use to walk with you. This sense of nostalgia. You love it.\n";
	getchar();
	cout << "Finally, you found your home.\n";
	getchar();
	cout << "The old man tried to knock on the door but nobody answer.\n";
	getchar();
	cout << "You didn't bother too much because Emily is the type of person who doesn't want to answer the door to unknown person.\n";
	getchar();
	cout << "But, you know that there's a window that Emily always left open for you to come in and out whenever you want.\n"; 
	getchar();
	cout << "You go to the window. Surely enough, the window is open. You get inside and then it is silent.\n"; 
	getchar();
	cout << "Too silent... You walk around the house to find Emily. You go to the living room and see a paper on the table.\n";
	getchar();
	cout << "Since you are a cat and no idea about what is written, the old man read it to you.\n";
	getchar();
	cout << "What is written on the paper:\n"; 
	cout << "Dear mom, dad or anyone who read this. I am sorry for everything. I try my best but I keep failing.\n";
	cout << "Maybe what you said is true. I am such a failure of a child. Please forget about me.\n";
	getchar();
	cout << "You realize that something bad is gonna happened. You run around and search every corner of the house. Finally, in the bathroom, you find her.\n";
	getchar();
	ending2();
}

// display the endings depends on player choice
void Script::ending1()
{
	setEnding(1);
	
	cout << "You have been adopted by the old man. " << endl;
	cout << "The old man treats you very well, providing you with food, shelter, and gentle caresses. ";
	getchar();
	cout << "However, deep inside your heart, there still resides that one person, and you wonder where she could be.
	cout << "You think about whether there is a chance in your lifetime to find her. " << endl;
	cout << "You still spend your time outside trying to gather information about her, but so far, you always come back with empty-handed. ";
	getchar();
	cout << "And so, day after day, year after year, you reach the end of your life. " << endl;
	cout << "The old man is heartbroken, as you had been his sole companion for such a long time. He hold onto you tightly, reluctant to let go." << endl;
	cout << "In your final moments, you muster all your remaining strength to give the old man a gentle lick. ";
	getchar();
	cout << "You closed your eyes and lose your breath. ";
	getchar();
	
	// check if there is a secret ending
	secretEnding();
	
	game.quitGame();
}


// Ending 2: Found out Emily die of suicide at bathroom
void Script::ending2()
{
	setEnding(2);
	
	cout << "When you enter the bathroom, you see Emily lying on the floor. ";
	getchar();
	cout << "Why is she sleeping here? ";
	getchar();
	cout << "You walk toward her and you see the pool of blood under her right hand. On her hand, there are a few deep scratch marks. " << endl
		 << "You don't remember giving this scar on her. Also, even though you scratch her at times, but you'll never scratch this deep. ";
	getchar();
	cout << "Huh. ";
	getchar();
	cout << "You meow at her and she didn't reply. She just lies there. Lifeless. ";
	getchar();
	cout << "Lifeless? ";
	getchar();
	cout << "No way. ";
	getchar();
	cout << "No! It can't be! ";
	getchar();
	cout << "You try over and over again to wake her up but to no avail. " << endl
		 << "You finally come to the conclusion and acceptance that Emily is no longer in this world. " << endl
		 << "But you don't dare to leave her alone like that. " << endl
		 << "After leaving her behind for so long now you have to part ways again...? ";
	getchar();
	cout << "No way. ";
	getchar();
	cout << "You stay by her side. You love her too much. You want to be loyal to her and only her. " << endl 
		 << "You  stay there. With nothing to eat or drink. " << endl;
	getchar();
	cout << "Days and weeks pass by. You feel your body weakened. You no longer can get up and walk. " << endl
		 << "You feel your eyes are getting heavier and heavier before you finally close your eyes and never open them again. " << endl;
	getchar();
	
	// check if there is a secret ending
	secretEnding();
	
	game.quitGame();
}

// Ending 3: Stray Cat
void Script::ending3()
{
	setEnding(3);
	
	cout << "You choose to live as a stray and not trusting or giving your loyalty to human as easily as before. ";
	getchar();
	cout << "You live your days alone in the alley. You slowly grow more and more sick. " << endl;
	cout << "You develop a lot of illness such as ringworm and fips. ";
	getchar();
	cout << "You finally breath your final breath after a year as the sickness worsen... ";
	getchar();
	
	// check if there is a secret ending
	secretEnding();
	
	game.quitGame(); 
}

// if happiness > X, this ending will happen
void Script::secretEnding()
{
	// the happiness value is not enough as maximum happiness, there is normal ending
	if (player.getHappiness() < MAX_HAPPINESS)
	{
		// switch case to determine normal ending for different ending
		switch (Script.getEnding())
		{
			// END1
			case 1:
			{
				cout << "You have successfully achieved Ending 1! " << endl ;
				cout << "*** END1: Old Man Is Kind, But...You Miss Her ***" << endl;
			}
			// END2
			case 2:
			{
				cout << "You have successfully achieved Ending 2! " << endl ;
				cout << "*** END2: You Found Her, Finally ***" << endl;
			}
			// END3
			case 3:
			{
				cout << "You have successfully achieved Ending 3! " << endl ;
				cout << "*** END3: New Life As Stray ***" << endl;
			}
		}
	} // the value of happiness is maximum, the unique secret ending of different ending is triggered
	else if (player.getHappiness() >= MAX_HAPPINESS)
	{
		// switch case to determine secret ending for different ending
		switch (Script.getEnding())
		{	// secret ending for END1 or END3 if the player happiness is achieved
			case 1 || case 3:
			{
				cout << "You find yourself in a darkened world, but a distant light catches your eye. " << endl
					 << "Intrigued, you move towards it, and it gradually engulfs the darkness, revealing a serene sight. " << endl
					 << "The sky above is a calming blue, surrounded by beautiful flowers. ";
				getchar();
				cout << "As you take it all in, a familiar tune reaches your ears, accompanied by a voice you know so well. " << endl
					 << "You look around and spot her in the midst of the flowerbed. ";
				getchar();
				cout << "Emily. Is it really her? ";
				getchar();
				cout << "You approach hesitantly, and she greets you with a heartfelt apology. ";
				getchar();
				cout << player.getName() << "...Do you recognise me? I miss you so much.. " << endl
					 << "Come here. " << player.getName() << "I love you. I am sorry...I promise I wouldn't left you alone again. ";
				getchar();
				cout << "Overwhelmed, you embrace each other tightly, immersed in a moment filled with love and reunion. ";
				getchar();
				
				cout << "Congratulation! You have successfully achieved Secret Ending 1! " << endl ;
				cout << "*** SECRET END1: Heaven? ***" << endl;
			}
			// secret ending after END2 if player happiness is achieved
			case 2:
			{
				cout << player.getName() << "! " << player.getName() <<"! ";
				getchar();
				cout<< "You hear a voice calling you. " << endl;
				cout << "Your eyes stinging from the brightness. You woke up in a daze. ";
				getchar();
				cout << "Is this heaven? ";
				getchar();
				cout << "You look around, the room layout is so familiar. "
				cout << "You find a person standing right in front of you. ";
				getchar();
				cout << "You just cannot believe your eyes! Here she is, your owner, Emily!";
				getchar();
				cout << "It takes a moment to sink in, but you're flooded with relief. " << endl
					 << "It was all just a dream. Luckily, it is a nightmare, thank goodness. " << endl
					 << "Emily is still alive, she never left you alone. You can feel her temperature. " << endl
					 << "However, that dream had you clinging to Emily, afraid of what could happen if it came true. " << endl
					 << "Now, you're determined. You'll be by her side through it all, no matter the challenges. " << endl;
				getchar();
				
				cout << "Congratulation! You have successfully achieved Secret Ending 2! " << endl ;
				cout << "*** SECRET END2: A Nightmare ***" << endl;
			}
			// not showing anything if cannot find the ending
			default:
			{
				return;
			}
		}
	}
}

