//
//  Card.h
//  Poker
//
//  Created by huxf on 15/6/28.
//
//

#ifndef __Poker__Card__
#define __Poker__Card__

enum CardType{
    Two = 2,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King,
    Ace,
    Joker,
    JokerPro
};

enum CardColor{
    Heart,
    Spade,
    Club,
    Diamond
};

struct Card {
    
    CardType type;
    CardColor color;
    
};

#endif /* defined(__Poker__Card__) */
