//Author :Austin Pachano
//http://www.github.com/apachano
//Rev    :03/18/2017

#include "terminal.h"

Regi initiateregister()
{//Stores constants for register - Need to make read from file
  printf("Initializing register data\n");
  Regi regi;
  regi.regiid = 1;
  regi.store = 1582;
  regi.uid = 0;
  regi.status = 0;

  return regi;
}

void pause(Regi regi)
{
  if(regi.status == 2)
  {
    regi.status = 1;
  }
  else
  {
    regi.status = 2;
  }
}

int main()//Main Function for POS
{
  printf("Booting POS now\n");

  //Initiate POS
  Regi regi = initiateregister();

  //Initiate the menu
  Menu *menu;
  menu = initiatemenu();

  printf("Launching interface\n");
  //Launch Terminal Interface
  terminal(menu, regi);
  printf("Goodbye!\n");
}
