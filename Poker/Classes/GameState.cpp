//
//  GameState.cpp
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#include "GameState.h"

static GameState* instance = nullptr;

GameState::GameState()
{
}

GameState::~GameState()
{
}

GameState* GameState::getInstance()
{
    if( !instance ) instance = new GameState();
    
    return instance;
}