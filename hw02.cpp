//============================================================================
// Name        : hw02.cpp
// Author      : Jack Schmid -- CS1C T/Th 3:30-5:50 -- Professor Kath
// Description : Program to practice creating classes and making member functions in C++, Ansi-style
//============================================================================

#include "hw02.h"
#include "Card.h"
#include "Deck.h"

//Function that compares two deck objects
bool compareDeck(Deck* d1, Deck* d2){
	//Loops through each card of each deck
	for(int i = 0; i < DECK_SIZE; i++){
		if((d1->getCard(i).getRank() != d2->getCard(i).getRank()) || (d1->getCard(i).getSuit() != d2->getCard(i).getSuit())){
			//If the cards being compared are not the same return false
			return false;
		}else{
			//Decks are equal so far
		}
	}
	//Otherwise the decks are equal
	return true;
}

int main() {
	//Create two Deck objects
	Deck *deck1 = new Deck();
	Deck *deck2 = new Deck();
	//Print the first deck before and after shuffling
	deck1->print();
	deck1->perfectShuffle();
	deck1->print();

	int count = 1;
	//Compare the shuffled deck to the unshuffled one and keep shuffling until they are the same
	while(!compareDeck(deck1, deck2)){
		count++;
		deck1->perfectShuffle();
	}
	//Display how many shuffles it took until they were equal again
	cout << "It took " << count << " shuffles to reset the deck" << endl;
	deck1->print();


	return 0;
}
