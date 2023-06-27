#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class Item
{
private:
    struct ItemNode
    {
        ItemNode* nextItem;
    };

    ItemNode* coinTop;
    ItemNode* cardTop;
    ItemNode* foodTop;

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
    void PopCard();
    void PopFood();
    bool isCoinEmpty();
    bool isCardEmpty();
    bool isFoodEmpty();
};

#endif
