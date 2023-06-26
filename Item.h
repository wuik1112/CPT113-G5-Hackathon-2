#include<iostream>

using namespace std;

class Item
{
	private:
		//coin item
		struct Coin
		{
			Coin *nextCoin;
		};
		Coin *coinTop;
		//business card item
		struct Card
		{
			Card *nextCard;
		};
		Card *cardTop;
		//food item
		struct Food
		{
			Food *nextFood;
		};
		Food *foodTop;
		
		int coinCount;
		int cardCount;
		int foodCount;
		
	public:
		Item();
		~Item();
		int getCoinCount();
		int getCardCount();
		int getFoodCount();
		void PushCoin();
		void PushCard();
		void PushFood();
		void PopCoin();
		void PopFood();
		void PopCard();
		bool isCoinEmpty();
		bool isCardEmpty();
		bool isFoodEmpty();
};
