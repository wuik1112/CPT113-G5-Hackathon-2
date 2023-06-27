#include <iostream>
#include "Item.h"

using namespace std;

Item::Item()
{
    coinTop = nullptr;
    cardTop = nullptr;
    foodTop = nullptr;
    coinCount = 0;
    cardCount = 0;
    foodCount = 0;
}

Item::~Item()
{
    ItemNode* tempCoin;
    ItemNode* tempCard;
    ItemNode* tempFood;

    while (coinTop != nullptr)
    {
        tempCoin = coinTop;
        coinTop = coinTop->nextItem;
        delete tempCoin;
    }

    while (cardTop != nullptr)
    {
        tempCard = cardTop;
        cardTop = cardTop->nextItem;
        delete tempCard;
    }

    while (foodTop != nullptr)
    {
        tempFood = foodTop;
        foodTop = foodTop->nextItem;
        delete tempFood;
    }
}

int Item::getCoinCount()
{
    return coinCount;
}

int Item::getCardCount()
{
    return cardCount;
}

int Item::getFoodCount()
{
    return foodCount;
}

void Item::PushCoin()
{
    ItemNode* newCoin = new ItemNode;

    if (isCoinEmpty())
    {
        coinTop = newCoin;
        newCoin->nextItem = nullptr;
    }
    else
    {
        newCoin->nextItem = coinTop;
        coinTop = newCoin;
    }

    coinCount++;
}

void Item::PushCard()
{
    ItemNode* newCard = new ItemNode;

    if (isCardEmpty())
    {
        cardTop = newCard;
        newCard->nextItem = nullptr;
    }
    else
    {
        newCard->nextItem = cardTop;
        cardTop = newCard;
    }

    cardCount++;
}

void Item::PushFood()
{
    ItemNode* newFood = new ItemNode;

    if (isFoodEmpty())
    {
        foodTop = newFood;
        newFood->nextItem = nullptr;
    }
    else
    {
        newFood->nextItem = foodTop;
        foodTop = newFood;
    }

    foodCount++;
}

void Item::PopCoin()
{
    if (isCoinEmpty())
    {
        cout << "You have no coin in possession.\n";
    }
    else
    {
        ItemNode* coinTemp = coinTop;
        coinTop = coinTop->nextItem;
        delete coinTemp;
        coinCount--;
    }
}

void Item::PopCard()
{
    if (isCardEmpty())
    {
        cout << "You have no card in possession.\n";
    }
    else
    {
        ItemNode* cardTemp = cardTop;
        cardTop = cardTop->nextItem;
				delete cardTemp;
				cardCount--;
		}
}

void Item::PopFood()
{
    if (isFoodEmpty())
    {
        cout << "You have no food in possession.\n";
    }
    else
    {
        ItemNode* foodTemp = foodTop;
        foodTop = foodTop->nextItem;
        delete foodTemp;
        foodCount--;
    }
}

bool Item::isCoinEmpty()
{
    return coinCount <= 0;
}

bool Item::isCardEmpty()
{
    return cardCount <= 0;
}

bool Item::isFoodEmpty()
{
    return foodCount <= 0;
}
