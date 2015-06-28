//
//  GameMode.cpp
//  Poker
//
//  Created by ZivHoo on 15/6/27.
//
//

#include "GameMode.h"

static GameMode* instance = nullptr;

GameMode::GameMode()
{
    _playerState = PlayerState::getInstance();
    
    for (int i = CardType::Two; i < CardType::Ten; ++i)
    {
        _playerState->getCards().push_back({(CardType)i,CardColor::Spade});
    }
}

GameMode::~GameMode()
{
}

GameMode* GameMode::getInstance()
{
    if( !instance ) instance = new GameMode();
    return instance;
}