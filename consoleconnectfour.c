#include <stdio.h>
#include "connectfour.h"

int main(void) {
  int num_players = INVALIDPLAYERS;
  while (!validPlayerNumber(num_players))
    num_players = getPlayers();
  for (int i = 0; i < BOARDCOLUMN; i++) {
    for (int j = 0; i < BOARDROW; j++) {
      printf("%c\t", board[i][j]);
    }
    printf("--\t");
  }
  return 0;

}
