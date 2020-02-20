/*
 * Deck.cpp
 *
 *  Created on: Jan 21, 2020
 *      Author: jschmid20
 */


#include "Deck.h"
#include "hw02.h"
//Default Deck Constructor
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
//Deck memeber function that perfect shuffles the deck
void Deck::perfectShuffle(){
	//Split the cards array into two temp arrays
	Card split1[DECK_SIZE/2];
	Card split2[DECK_SIZE/2];
	//Fill the temp arrays
	for(int i = 0; i < DECK_SIZE/2; i++){
		split1[i] = cards[i];
		split2[i] = cards[i+DECK_SIZE/2];
	}
	//Re-combine temp arrays into original deck
	for(int i = 0; i < 52; i += 2){
		cards[i] = split1[i/2];
		cards[i+1] = split2[i/2];
	}
}
//Deck member function that prints out each card it contains
void Deck::print(){
	for(int i = 0; i < DECK_SIZE; i++){
		cards[i].print();
	}
	cout << endl;
}
