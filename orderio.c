//Author : Austin Pachano
//http://www.github.com/apachano
//Rev    : 03/17/17
//         This file contains functions critical to file i/o operations
//         concering orders.

#include "order.h"

int storeorder(Order order);
{//Stores order data in order database as well as updating que
  FILE orderdata = fopen("/orders/date/id.text", "r+");
  FILE que = fopen("/operations/que.dat", "r+");
  char buffer[120];
  fgets(buffer,120,fp);
  fprintf(fp, %i %i", store, regi);

  fclose(orderdata);
  fclose(que);
}

Order pullorder(int order);
{//Pulls an order from database and loads into order structure
  FILE orderdata = fopen("/orders/date/id.text", "r+");
}
