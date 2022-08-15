#ifndef CONNECTFOUR_H
#define CONNECTFOUR_H

#define ASCIIZERO 48
#define INVALIDPLAYERS -1
#define BOARDROW 6
#define BOARDCOLUMN 7

typedef char board_t[BOARDROW][BOARDCOLUMN];
extern board_t board;

int getPlayers(void);
int validPlayerNumber(int);
void newBoard(void);
void paintBoard(void);
int placeToken(void);
int validPlaceToken(int);


#endif
