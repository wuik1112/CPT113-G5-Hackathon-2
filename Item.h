#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

// This is a class to handle the items hold by player in this game
class Item
{
private:
    // a stack that in charge of dealing with items
    struct ItemNode
    {
        ItemNode* nextItem;
    };

    // three types of items will be handle
    ItemNode* coinTop; // coin to give the old man
    ItemNode* cardTop; // card that consist of photo of owner
    ItemNode* foodTop; // to fill the stomach or give it to cat team

    // hold the number of items
    int coinCount;
    int cardCount;
    int foodCount;

public:
    // Constructor
    Item();
    // Destructor
    ~Item();

    // return the number of each items
    int getCoinCount();
    int getCardCount();
    int getFoodCount();

    // increase item into the stack
    void PushCoin();
    void PushCard();
    void PushFood();

    // remove item from the stack
    void PopCoin();
    void PopCard();
    void PopFood();

    // check if the stack is empty
    bool isCoinEmpty();
    bool isCardEmpty();
    bool isFoodEmpty();
};

#endif
