#ifndef CONNECTFOUR_H
#define CONNECTFOUR_H

#define ASCIIZERO 48
#define INVALIDPLAYERS -1
#define BOARDROW 7
#define BOARDCOLUMN 6

typedef char board_t[BOARDCOLUMN][BOARDROW];
extern board_t board;

int getPlayers(void);
int validPlayerNumber(int);

#endif
