#include<iostream>

using namespace std;

class Item
{
	private:
		//coin item
		struct Coin
		{
			int cVal;
			Coin *nextCoin;
		};
		Coin *coinTop;
		//business card item
		struct Card
		{
			int bVal;
			Card *nextCard;
		};
		Card *cardTop;
		//food item
		struct Food
		{
			int fVal;
			Food *nextFood;
		};
		Food *foodTop;
		
		int count;
		
	public:
		Item();
		~Item();
		void PushCoin(int);
		void PushCard(int);
		void PushFood(int);
		void PopCoin(int);
		void PopFood(int);
		void PopCard(int);
		bool isEmpty();
};
