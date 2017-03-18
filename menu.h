#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ASCII ART DIAGRAM FOR MENU STRUCTURE
|=========|
|Menu Item|
|=========|
*/

typedef struct menuingredient{
  int id;
  int active;
  char name[128];
  int charge;
} Mingredient;

typedef struct menuitem{ //Stores information on a single menu item
  char name[128];
  int active; //0 for DNE, 1 for active, 2 for header, 3 for disabled
  int price;
  Mingredient ingredients[100];
  int ingredientq[100];
} Menuitem;

typedef struct menu{
  Menuitem menuitem[100000];
  Mingredient ingredient[100000];
} Menu;

//Begin function prototyping
Menu *initiatemenu();
