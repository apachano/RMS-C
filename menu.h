#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ASCII ART DIAGRAM FOR MENU STRUCTURE


*/

typedef struct menuingredient{
  char name[128];
} Mingredient;

typedef struct menuitem{ //Stores information on a single menu item
  char name[128];
  int active; //0 for DNE, 1 for active, 2 for header, 3 for disabled
  int price;
  Mingredient ingredients[100];
} Menuitem;

//Begin function prototyping
Menuitem *initiatemenu();
Mingredient *initiateingredients();
