/*
 * Card.h
 *
 *  Created on: Jan 21, 2020
 *      Author: jschmid20
 */

#ifndef CARD_H_
#define CARD_H_

#include <iostream>
using namespace std;

class Card{
public:
	Card();
	Card(string startRank, string startSuit);
	~Card();
	//Card Suit setter function
	void setSuit(string newSuit){suit = newSuit;}
	//Card Suit getter function
	string getSuit(){return suit;}
	//Card Rank setter function
	void setRank(string newRank){rank = newRank;}
	//Card Rank getter function
	string getRank(){return rank;}
	//Card member function that prints out a cards suit and rank
	void print(){cout << "Rank: " << getRank() << "\t\tSuit: " << getSuit() << endl;};
private:
	string suit;
	string rank;
protected:

};



#endif /* CARD_H_ */
