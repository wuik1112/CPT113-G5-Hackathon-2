#include<iostream>
#include<Item.h>
using namespace std;

Item::Item()
{
	//set initial state
	coinTop = nullptr;
	cardTop = nullptr;
	foodTop = nullptr;
	coinCount = 0;
	cardCount = 0;
	foodCount = 0;
	
}

Item::~Item()
{
	//remove content of each stacks one by one
	Coin *tempCoin;
	Card *tempCard;
	Food *tempFood;
	
	//coin
	while(coinTop != nullptr)
	{
		tempCoin = coinTop;
		coinTop = coinTop->nextCoin;
		delete tempCoin;
	}
	
	//card
	while(cardTop != nullptr)
	{
		tempCard = cardTop;
		cardTop = cardTop->nextCard;
		delete tempCard;
	}
	
	//food
	while(foodTop != nullptr)
	{
		tempFood = foodTop;
		foodTop = foodTop->nextFood;
		delete tempFood;
	}
	
}

void Item::PushCoin()
{
	//if player receive a coin
	Coin *newCoin = nullptr;
	
	newCoin = new Coin;
	
	if(isEmpty())
	{
		coinTop = newCoin;
		newCoin->nextCoin = nullptr;
	}
	else
	{
		newCoin->nextCoin = coinTop;
		coinTop = newCoin;
	}
	
	coinCount++;
}

void Item::PushCard()
{	
	//if player receive a business card
	Card *newCard = nullptr;
	
	newCard = new Card;
	
	if(isEmpty())
	{
		cardTop = newCard;
		newCard->nextCard = nullptr;
	}
	else
	{
		newCard->nextCard = cardTop;
		cardTop = newCard;
	}
	
	cardCount++;
}

void Item::PushFood()
{
	//if player receive food
	Food *newFood = nullptr;
	
	newFood = new Food;
	
	if(isEmpty())
	{
		foodTop = newFood;
		newFood->nextFood = nullptr;
	}
	else
	{
		newFood->nextFood = foodTop;
		foodTop = newFood;
	}
	
	foodCount++;
}

void Item::PopCoin()
{
	//remove coin from player's inventory
	Coin *coinTemp = nullptr;
	
	if(isEmpty())
	{
		cout << "You have no coin in possession.\n";
	}
	else
	{
		coinTemp = coinTop->nextCoin;
		delete coinTop;
		coinTop = coinTemp;
		
		coinCount--;
	}
}

void Item::PopCard()
{
	//remove card from player's inventory
	Card *cardTemp = nullptr;
	
	if(isEmpty())
	{
		cout << "You have no card in possession.\n";
	}
	else
	{
		cardTemp = cardTop->nextCard;
		delete cardTop;
		cardTop = cardTemp;
		
		cardCount--;
	}
}

void Item::PopFood()
{
	//remove food from player's inventory
	Food *foodTemp = nullptr;
	
	if(isEmpty())
	{
		cout << "You have no food in possession.\n";
	}
	else
	{
		foodTemp = foodTop->nextFood;
		delete foodTop;
		foodTop = foodTemp;
		
		foodCount--;
	}
}

bool Item::isCoinEmpty()
{
	bool status;
	
	if(coinCount <= 0)
	{
		status = true;
		return status;
	}
	else
	{
		status = false;
		return status;
	}
}

bool Item::isCardEmpty()
{
	bool status;
	
	if(cardCount <= 0)
	{
		status = true;
		return status;
	}
	else
	{
		status = false;
		return status;
	}
}

bool Item::isFoodEmpty()
{
	bool status;
	
	if(foodCount <= 0)
	{
		status = true;
		return status;
	}
	else
	{
		status = false;
		return status;
	}
}
