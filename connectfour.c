#include "connectfour.h"
#include <stdio.h>

board_t board = {0};

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
