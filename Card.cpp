/*
 * Card.cpp
 *
 *  Created on: Jan 16, 2020
 *      Author: jschmid20
 */

#include "Card.h"
#include "hw02.h"

Card::Card(){
	rank = ranks[0];
	suit = suits[0];
}
Card::Card(string startRank, string startSuit){
	rank = startRank;
	suit = startSuit;
}
Card::~Card(){}


