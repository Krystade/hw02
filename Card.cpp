/*
 * Card.cpp
 *
 *  Created on: Jan 16, 2020
 *      Author: jschmid20
 */

#include "Card.h"
#include "hw02.h"
//Default Card Constructor
Card::Card(){
	rank = ranks[0];
	suit = suits[0];
}
//Overloaded Card Constructor
Card::Card(string startRank, string startSuit){
	rank = startRank;
	suit = startSuit;
}
//Card Destructor
Card::~Card(){}


