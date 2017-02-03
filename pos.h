#include <stdio.h>
#include <time.h>

struct order{
  int date;
  int inittime;
  int comptime;
  int regi;
  int uid;
  int storenumber;
}

//Begin function prototyping
int initateregister();

int loadmenu();

int loadorder(int date, int regi, int inittime);

int storeorder(struct order *order);

struct order *neworder();
