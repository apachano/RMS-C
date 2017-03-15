//Author :Austin Pachano
//http://www.github.com/apachano
//Rev    :03/14/2017

#include "menu.h"

int main()//Main Function for POS
{
  printf("Booting POS now\n");
  long i;
  //Initiate the menu

  Menuitem *menu = initiatemenu();

  //print the menu

  for(i=0; i<99999; i++)
  {
    if(menu[i].active == 1)
    {
      printf("%lu %s",i, menu[i].name);
    }
  }
}
