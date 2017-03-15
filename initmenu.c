//Author: Austin Pachano
//http://www.github.com/apachano
//Rev   : 03/14/2017

#include "menu.h"

Menuitem *initiatemenu(){
  printf("sof");
  static Menuitem menu[100000];
  int id, active, nat;
  char buffer[240];
  char name[120];
  unsigned long i;
  printf("opening menu file");
  FILE *fp = fopen("databse/menu/menuitems.dat", "r");
  printf("Clearing Menu Array");
  for(i=0; i<99999; i++) //Set all menu items in array to inactive
  {
    menu[i].active = 0;
  }
  printf("scanning file");
  while(fgets(buffer, 240, fp) != NULL)
  {
    printf("scanning line\n");
    if(buffer[0] != '#')//Check for comment lines
    {
      scanf(buffer, " %d %d %d %s", id, active, nat, name);
      if(active == 1)
      {
        strcpy(menu[id].name , name);
        menu[id].active = 1;
      }
    }
  }
  return menu;
}

Mingredient *initiateingredients(){

}
