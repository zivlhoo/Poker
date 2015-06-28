//
//  Card.h
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#ifndef __Poker__CardSprite__
#define __Poker__CardSprite__

#include "cocos2d.h"
#include "ui/CocosGUI.h"

class CardSprite :public cocos2d::Node {
    
public:
    
    CREATE_FUNC(CardSprite);
    
    bool init();
    void configureGUIScene();
    
private:
    
    cocos2d::Node* _root;
    
    cocos2d::Sprite* _flowerTop;
    cocos2d::Sprite* _flowerButtom;
    cocos2d::ui::Text* _numberTop;
    cocos2d::ui::Text* _numberButtom;
    
};

#endif /* defined(__Poker__Card__) */
