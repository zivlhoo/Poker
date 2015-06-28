//
//  Card.cpp
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#include <sstream>
#include "CardSprite.h"
#include "cocostudio/CocoStudio.h"

USING_NS_CC;
using namespace ui;
using namespace std;
using namespace cocostudio;
using namespace cocostudio::timeline;

#define CCS_FILE "Card.csb"

CardSprite* CardSprite::create(CardType type,CardColor color)
{
    return CardSprite::create({type,color});
}

CardSprite* CardSprite::create(struct Card card)
{
    CardSprite *pRet = new(std::nothrow) CardSprite();
    if (pRet && pRet->init(card))
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        delete pRet;
        pRet = NULL;
        return NULL;
    }
}

bool CardSprite::init(struct Card card)
{
    Node::init();
    
    _card = card;
    
    _root = CSLoader::createNode(CCS_FILE);
    addChild(_root);
    
    this->configureGUIScene();
    
    setType();
    setColor();
    
    return true;
}

void CardSprite::configureGUIScene()
{
    _flowerTop = dynamic_cast<Sprite*>(_root->getChildByName("flower_top"));
    _flowerButtom = dynamic_cast<Sprite*>(_root->getChildByName("flower_buttom"));
    _numberTop = dynamic_cast<Text*>(_root->getChildByName("number_top"));
    _numberButtom = dynamic_cast<Text*>(_root->getChildByName("number_buttom"));
}

void CardSprite::setType()
{
    stringstream ss;
    if (_card.type <= Ten)
    {
        ss << (int)_card.type;
    }else if(_card.type== Jack)
    {
        ss << "J";
    }else if(_card.type== Queen)
    {
        ss << "Q";
    }else if(_card.type== King)
    {
        ss << "K";
    }else if(_card.type== Ace)
    {
        ss << "A";
    }else if(_card.type >= Joker)
    {
        ss << "JOKER";
    }
    
    string text = ss.str();
    _numberTop->setString(text);
    _numberButtom->setString(text);
    
    _numberTop->setTextColor(Color4B(255, 0, 0, 255));
}

void CardSprite::setColor()
{
    string str = String::createWithFormat("CardColor%d.png",(int)_card.color)->getCString();
    _flowerTop->setSpriteFrame(str);
    _flowerButtom->setSpriteFrame(str);
}



