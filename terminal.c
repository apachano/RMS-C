//Author : Austin Pachano
//http://github.com/apachano
//This file stores functions to create a terminal interface for the POS

#include "order.h"

void printcommands()
{
  clrscr();
  printf("Commands for terminal interface");
  printf("H             -> Print commands menu");
  printf("S             -> Print register status");
  printf("a id quantity -> Adds item with id and quantity");
  printf("v id          -> Voids item");
  printf("P             -> Prints order");
  printf("s             -> Store order");
  printf("p id quantity -> Promo item");
  printf("X             -> Close register");
}

void terminal()
{
  printcommands();
  char buffer[120];
  int id, quantity;
  char command = '0';
  while(command != X)
  {
    fgets(buffer, 120, stdin);
    sscanf("%c %i %i", command, id, quantity);
    switch:
      case command = H
  }

}
