//============================================================================
// Name        : hw02.cpp
// Author      : Jack Schmid
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "hw02.h"
#include "Card.h"
#include "Deck.h"


int main() {
	Card *c1 = new Card(ranks[9], suits[2]);
	c1->print();
	Card *c2 = new Card(ranks[9], suits[2]);
	c2->print();

	Deck *deck1 = new Deck();
	Deck *deck2 = new Deck();
	deck1->print();

	for(int i = 0; i < 100; i += 2){
		cout << i << " ";
	}

	//deck1->perfectShuffle();
	//deck1->print();
	Card *c = new Card(ranks[9], suits[2]);
	c->print();

	bool equal = false;
	for(int i = 0; i < DECK_SIZE; i++){
		if(deck1->getCard(i).getRank() != deck2->getCard(i).getRank() || deck1->getCard(i).getSuit() != deck2->getCard(i).getSuit()){
			equal = false;
			break;
		}else{
			//Decks are equal so far
		}
		cout << true;
	}

	return 0;
}
