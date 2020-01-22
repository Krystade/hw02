/*
 * Deck.cpp
 *
 *  Created on: Jan 21, 2020
 *      Author: jschmid20
 */


#include "Deck.h"
#include "hw02.h"

//Overloading == operator for Deck objects
bool operator == (const Deck &lhs, const Deck &rhs){
	for(int i = 0; i < DECK_SIZE; i++){
		if(lhs.getCard(i).getRank() != rhs.getCard(i).getRank() || lhs.getCard(i).getSuit() != rhs.getCard(i).getSuit()){
			cout << lhs.getCard(i).getRank() << rhs.getCard(i).getRank() << " || " << lhs.getCard(i).getSuit() << rhs.getCard(i).getSuit() << endl;
			return false;
		}else{
			//Decks are equal so far
		}
	}
	return true;
}

Deck::Deck(){
	int rankCount = 0;
	int suitCount = 0;
	for(int i = 0; i < DECK_SIZE; i++){
		cards[i].setRank(ranks[rankCount%13]);
		cards[i].setSuit(suits[suitCount/13]);
		rankCount++;
		suitCount++;
	}
}

void Deck::perfectShuffle(){
	cout << "Shuffling" << endl;
	//Split the cards array into two temp arrays
	Card split1[DECK_SIZE/2];
	Card split2[DECK_SIZE/2];
	//Fill the temp arrays
	for(int i = 0; i < DECK_SIZE/2; i++){
		split1[i] = cards[i];
		split2[i] = cards[i+DECK_SIZE/2];
	}
	//Re-combine temp arrays into original deck
	for(int i = 0; i < DECK_SIZE; i += 2){
		cards[i] = split1[i];
		cards[i+1] = split2[i];
	}
	cout << "Done shuffling" << endl;
}

void Deck::print(){
	cout << "Printing" << endl;
	for(int i = 0; i < DECK_SIZE; i++){
		cards[i].print();
	}
	cout << endl;
	cout << "Done Printing" << endl;
}
