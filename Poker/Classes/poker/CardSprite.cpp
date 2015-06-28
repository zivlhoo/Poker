//
//  Card.cpp
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#include "CardSprite.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace ui;
using namespace cocostudio;
using namespace cocostudio::timeline;

#define CCS_FILE "Card.csb"

bool CardSprite::init()
{
    Node::init();
    _root = CSLoader::createNode(CCS_FILE);
    
    addChild(_root);
    
    this->configureGUIScene();
    
    return true;
}

void CardSprite::configureGUIScene()
{
    _flowerTop = dynamic_cast<Sprite*>(_root->getChildByName("flower_top"));
    _flowerButtom = dynamic_cast<Sprite*>(_root->getChildByName("flower_buttom"));
    _numberTop = dynamic_cast<Text*>(_root->getChildByName("number_top"));
    _numberButtom = dynamic_cast<Text*>(_root->getChildByName("number_buttom"));
}




