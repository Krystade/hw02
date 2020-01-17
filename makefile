CC = g++
Flags = -std=c++14 - Wall - g
OBJS = Card.o Deck.o 

all: hw02

hw02: hw02.cpp Card.o Deck.o
	$(CC)$(FLAGS)hw02.cpp -o hw02 $(OBJS)

 Card.o:Card.cpp Card.h
  $(CC)$(FLAGS) -c Card.cpp -o Card.o

 Deck.o:Deck.cpp Deck.h
  $(CC)$(FLAGS) -c Deck.cpp -o Deck.o

clean:
	rm*.o hw02 hw02.tar

tar:
	tar cf hw02.tar hw02.scr makefile hw02.cpp cardDeckClass.h cardDeckClass.cpp
