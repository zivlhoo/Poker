//
//  GameScene.cpp
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#include "GameScene.h"
#include "cocostudio/CocoStudio.h"
#include "CardSprite.h"

USING_NS_CC;

#define CCS_FILE "GameScene.csb"

using namespace cocostudio::timeline;

bool GameScene::init()
{
    Scene::init();
    
    _root = CSLoader::createNode(CCS_FILE);
    
    addChild(_root);
    
    
    addChild(CardSprite::create(CardType::Jack, CardColor::Heart));
    
    return true;
}