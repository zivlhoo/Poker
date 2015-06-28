//
//  GameMode.h
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#ifndef __Poker__GameMode__
#define __Poker__GameMode__

#include "PlayerState.h"

class GameMode {
    
    GameMode();
    
public:
    static GameMode* getInstance();
    virtual ~GameMode();
    
private:

    PlayerState* _playerState;
    
    
};

#endif /* defined(__Poker__GameMode__) */
