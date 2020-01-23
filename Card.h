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
	void setSuit(string newSuit){suit = newSuit;}
	string getSuit(){return suit;}
	void setRank(string newRank){rank = newRank;}
	string getRank(){return rank;}

	void print(){cout << "Rank: " << getRank() << "\t\tSuit: " << getSuit() << endl;};
private:
	string suit;
	string rank;
protected:

};



#endif /* CARD_H_ */
