/*
 * Deck.h
 *
 *  Created on: Jan 21, 2020
 *      Author: jschmid20
 */

#ifndef DECK_H_
#define DECK_H_

#include <iostream>
#include "hw02.h"
#include "Card.h"
using namespace std;

class Deck{
public:
	Deck();
	~Deck();

	Card getCard(int i) const {return cards[i];}
	void perfectShuffle();
	void print();
private:
	Card cards[DECK_SIZE];
protected:

};

#endif /* DECK_H_ */
