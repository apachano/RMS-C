//Author : Austin Pachano
//http://www.github.com/apachano
//Rev    : 3/17/2017
//Supplimental functions for menu operations

#include "menu.h"

void printmenu(Menu *menu)
{
	  printf("| ID    | Name \n");
  int i;
  for(i=0; i<99999; i++)
  {
    if(menu->menuitem[i].active == 1)
    {
      printf("| %05d | %s\n",i, menu->menuitem[i].name);
    }
  }
}
