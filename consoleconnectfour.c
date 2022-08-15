#include "connectfour.h"
#include <stdio.h>
#include <stdlib.h>


int main(void) {
  int num_players = INVALIDPLAYERS;
  while (!validPlayerNumber(num_players))
    num_players = getPlayers();
  newBoard();
  system("clear");
  paintBoard();
  return 0;

}
