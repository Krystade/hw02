/*
 * hw02.h
 *
 *  Created on: Jan 16, 2020
 *      Author: jschmid20
 */

#ifndef HW02_H_
#define HW02_H_

#include <iostream>
using namespace std;

const int DECK_SIZE = 52;
const string suits[] = {"Clubs", "Diamonds","Hearts", "Spades"};
const string ranks[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
typedef enum {
	Hearts, Diamonds, Spades, Clubs
} suitType;

typedef enum {
	One, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace
} rankType;

#endif /* HW02_H_ */
