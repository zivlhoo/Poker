//
//  GameState.h
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#ifndef __Poker__GameState__
#define __Poker__GameState__

#include "cocos2d.h"

class GameState {
    
    GameState();
    
public:
    virtual ~GameState();
    static GameState* getInstance();
    
    
private:
    
    std::string _hostIp;
    std::string _port;
    
};

#endif /* defined(__Poker__GameState__) */
