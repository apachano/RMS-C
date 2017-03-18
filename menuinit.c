//Author :Austin Pachano
//http://www.github.com/apachano
//Rev    :03/18/2017
//Initiates menu data for use with orders system

#include "menu.h"

Menu *initiatemenu(){
  Menu *menu = malloc(sizeof(Menu));
  int id, active, nat, ing, count;
  char buffer[240];
  int sing[100];
  char name[120];
  unsigned long i;
  printf("opening menu file\n");
  FILE *fp = fopen("database/menu/menuitems.dat", "r");
  if(fp == NULL)
  {
    printf("Menu File does not exist\n");
    return NULL;
  }
  printf("Clearing Menu Array\n");
  for(i=0; i<99999; i++) //Set all menu items in array to inactive
  {
    //printf("i = %ul \n", i);
    menu->menuitem[i].active = 0;
  }
  printf("scanning file\n");
  while(fgets(buffer, 240, fp) != NULL) // Read from file
  {
    printf("scanning line\n");
    if(buffer[0] != '#')//Check for comment lines
    {
      count = sscanf(buffer, "%d %d %d %s %d %d %d %d %d %d %d %d %d %d"
        , &id, &active, &nat, name, &sing[0], &sing[1], &sing[2], &sing[3], &sing[4], &sing[5], &sing[6], &sing[7], &sing[8], &sing[9]);
      if(active == 1)
      {
        printf("Count is %i \n", count);
        strcpy(menu->menuitem[id].name, name);
        menu->menuitem[id].active = 1;
      }
    }
  }
  fclose(fp);
  fp = fopen("database/menu/ingredients.dat", "r");
  if(fp == NULL)
  {
    printf("Ingredient File does not exist\n");
    return NULL;
  }
  printf("Clearing Ingredient Array\n");
  for(i=0; i<99999; i++) //Set all menu items in array to inactive
  {
    //printf("i = %ul \n", i);
    menu->ingredient[i].active = 0;
  }
  printf("scanning file\n");
  while(fgets(buffer, 240, fp) != NULL) // Read from file
  {
    printf("scanning line\n");
    if(buffer[0] != '#')//Check for comment lines
    {
      count = sscanf(buffer, "%d %d %d %s", &id, &active, &nat, name);
    if(active == 1)
      {//Check to see if ingredient is active
        printf("Loading ingredient id = %i \n", count);
        strcpy(menu->ingredient[id].name, name);
        menu->ingredient[id].active = 1;
      }
    }
  }
  fclose(fp);
  return menu;
}