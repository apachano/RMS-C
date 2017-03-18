//Author: Austin Pachano
//Rev   : 03/08/2017

#include "order.h"

Order initiateorder(int store, int regi, int uid)
{
  Order new = malloc(sizeof(struct order));
  new->regi = regi;
  new->uid = uid;
  new->store = store;
  new->item = malloc(sizeof(struct item));
  new->item->next = NULL;
  new->item->itemid = 000;
  new->item->quantity = 0;
  new->item->special = 0;
  new->item->ingredient = NULL;
  return new;
}

// ----- Base supplimental code for Orders ----- //
Item findparent(Item item, int itemid)
{//Returns the parent of a specific item
  if(item->next == NULL;)
  {
    return NULL;
  }
  else if(item->next->itemid == itemid)
  {
    return item;
  }
  return findparent(item->next, itemid);
}

// -------- Code For Order Manipulation -------  //
//Adds item to item list.
int additem(Order order, int itemid, int quantity)
{
  Item temp;
  if(temp = findparent(itemid) == NULL) //Check if item exists
  {
    int i = 0;
    temp = order->next;
    Item new = malloc(sizeof(struct item));
    new->itemid = itemid;//Set values for new item
    new->quantity = quantity;
    new->promo = 0;
    new->special = 0;
    while(temp->next->itemid < itemid)//Locate position for item
    {
      temp = temp->next;
    }
    new->next = temp->next;//Insert item in list
    temp->next = new;
    return 1;
  }
  else //If item exists then set quantity to new quantity
  {
    temp->next->quantity = quantity;
    return 1;
  }

return 0;//Catch incase of fail?
}

//Removed item from linked list, returns 1 on success and 0 on fail.
int voiditem(Order order,  int itemid)
{
  if(Item parent = findparent(itemid) != NULL)
  {
    Item temp = parent->next;
    parent->next = temp->next;
    free(temp);
    return 1;
  }

return 0;
}
