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

bool compareDeck(Deck* d1, Deck* d2){
	bool equal = true;
	for(int i = 0; i < DECK_SIZE; i++){
		if((d1->getCard(i).getRank() != d2->getCard(i).getRank()) || (d1->getCard(i).getSuit() != d2->getCard(i).getSuit())){
			equal = false;
			break;
		}else{
			//Decks are equal so far
		}
	}
	return equal;
}

int main() {
	Deck *deck1 = new Deck();
	Deck *deck2 = new Deck();
	deck1->print();
	deck1->perfectShuffle();
	deck1->print();

	int count = 1;
	while(!compareDeck(deck1, deck2)){
		count++;
		deck1->perfectShuffle();
	}
	cout << "It took " << count << " shuffles to reset the deck" << endl;
	deck1->print();


	return 0;
}
