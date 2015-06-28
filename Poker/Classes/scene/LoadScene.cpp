//
//  LoadScene.cpp
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#include "LoadScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "CardSprite.h"

USING_NS_CC;

using namespace cocostudio::timeline;

bool LoadScene::init()
{
    Scene::init();
    
    auto rootNode = CSLoader::createNode("LoadScene.csb");
    
    addChild(rootNode);
    
    return true;
}