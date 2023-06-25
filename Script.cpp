#include <iostream>
#include <Player.h>
#include <Script.h>
#include <Game.h>

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
	} // the value of happiness is maximum, the unique secret ending of different ending is triggered
	else if (player.getHappiness() == MAX_HAPPINESS)
	{
		// switch case to determine secret ending for different ending
		switch (Script.getEnding())
			// secret ending for END1 or END3 if the player happiness is achieved
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

// call if player lives less than and equal to 0
void Script::checkLives()
{
	if (player.getLives() > 0)
		return;
	else if (player.getLives() <= 0)
	{
		cout << "Unfortunately, you have exhausted all of your lives." << endl;
		cout << "Your journey ends here...Game Over. "<<endl;
		game.quitGame();
	}
}
