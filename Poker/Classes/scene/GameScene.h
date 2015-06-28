//
//  GameScene.h
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#ifndef __Poker__GameScene__
#define __Poker__GameScene__

#include "cocos2d.h"
#include "GameMode.h"

class GameScene : public cocos2d::Scene{
    
public:
    
    CREATE_FUNC(GameScene);
    
    bool init();
    
private:
    
    cocos2d::Node* _root;
    
    
    
};

#endif /* defined(__Poker__GameScene__) */
