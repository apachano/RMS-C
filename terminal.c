//Author :Austin Pachano
//http://www.github.com/apachano
//Rev    :03/18/2017
//This file stores functions to create a terminal interface for the POS

#include "terminal.h"

void printcommands()
{
  //Clrscr();
  printf("=================================================\n");
  printf("|Commands for terminal interface                |\n");
  printf("|H             -> Print commands menu           |\n");
  printf("|S             -> Print register status         |\n");
  printf("|a id quantity -> Adds item with id and quantity|\n");
  printf("|v id          -> Voids item                    |\n");
  printf("|P             -> Prints the order              |\n");
  printf("|M             -> Prints the menu               |\n");
  printf("|s             -> Store order                   |\n");
  printf("|p id quantity -> Promo item                    |\n");
  printf("|X             -> Close register                |\n");
  printf("=================================================\n");
}

void terminal(Menu *menu, Regi regidat)
{
  printcommands();
  printf(">");
  char buffer[120];
  char selection[10];
  int id, quantity;
  char command = '0';
  while(NULL != fgets(buffer, 120, stdin))
  {
    sscanf(" %c %i %i", &command, &id, &quantity);
    switch(buffer[0])
    {
      case 'X':
        return;
      case 'H':
        printcommands();break;
      case 'S':
        printf("not yet available\n");break;
      case 'a':
        printf("Insert function coming soon\n");break;
      case 'v':
        printf("Void function coming soon\n");break;
      case 'p':
        printf("this function prints the order\n");break;
      case 'M':
        printmenu(menu);break;
      default:
        printf("%c was not a recognised command\n", command);
        printcommands();
    }
    printf(">");
  }

}


