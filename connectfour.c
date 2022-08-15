#include "connectfour.h"
#include <stdio.h>

board_t board;

void newBoard(void) {
  for (int i = 0; i < BOARDROW; i++) {
    for (int j = 0; j < BOARDCOLUMN; j++) {
      board[i][j] = 'O';
    }
  }
}

void paintBoard(void) {
  puts("");
  for (int i = 0; i < BOARDROW + 1; i++) {
    for (int j = 0; j < BOARDCOLUMN; j++) {
      if (i == 0) {
        printf("  ");
        printf("%c ", (ASCIIZERO + j + 1));
      } else {
        printf("| ");
        printf("%c ", board[i - 1][j]);
        if (j == BOARDCOLUMN - 1)
          printf("|");
      }
    }
    printf("\n=============================\n");
  }
}

int getPlayers(void) {
  char players;
  puts("How many players 1 or 2?");
  scanf("%c", &players);
  while (getchar() != '\n');
  return players - ASCIIZERO;
}

int validPlayerNumber(int players) {
  return (players == 1 || players == 2);
}

int placeToken(void) {
  char playColumn;
  puts("What column would you like to place your token in?");
  scanf("%c", &playColumn);
  while (getchar() != '\n');
  return playColumn - ASCIIZERO;
}

int validPlaceToken(int tokenColumn) {
  return (tokenColumn >= 1 && tokenColumn <= 7);
}
