//
//  PlayerState.cpp
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#include "PlayerState.h"

static PlayerState* instance;

PlayerState::PlayerState()
{
    
}

PlayerState::~PlayerState()
{
}

PlayerState* PlayerState::getInstance()
{
    if(!instance)instance = new PlayerState();
    return instance;
}