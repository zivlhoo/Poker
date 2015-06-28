//
//  PlayerState.h
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#ifndef __Poker__PlayerState__
#define __Poker__PlayerState__

#include "Card.h"
#include "cocos2d.h"

class PlayerState {
    
    PlayerState();
public:
    ~PlayerState();
    static PlayerState* getInstance();
    
private:
    
    CC_SYNTHESIZE(std::vector<Card>, _cards, Cards);
    
};

#endif /* defined(__Poker__PlayerState__) */
