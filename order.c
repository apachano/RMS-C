//Author :Austin Pachano
//http://www.github.com/apachano
//Rev    :03/18/2017

#include "order.h"

Order *initiateorder(int store, int regi, int uid)
{
  Order *new = malloc(sizeof(Order));
  new->regi = regi;
  new->uid = uid;
  new->store = store;
  Item *temp = malloc(sizeof(Item));
  new->item = temp;
  new->item->next = NULL;
  new->item->itemid = 000;
  new->item->quantity = 0;
  new->item->special = 0;
  new->item->ingredient = NULL;
  return new;
}

// ----- Base supplimental code for Orders ----- //
Item *findparent(Item *item, int itemid)
{//Returns the parent of a specific item
  if(item->next == NULL)
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
int additem(Menu *menu, Order *order, int itemid, int quantity)
{
  Item *temp;
  if(menu->menuitem[itemid].active == 1)
  {
    temp = findparent(order->item, itemid);
    if(temp == NULL) //Check if item exists
    {
      int i = 0;
      temp = order->item;
      Item *new = malloc(sizeof(Item));
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
  }
  printf("that item is not active\n");
return 0;
}

//Removed item from linked list, returns 1 on success and 0 on fail.
int voiditem(Menu *menu, Order *order,  int itemid)
{
  Item *parent = findparent(order->item, itemid);
  if(parent != NULL)
  {
    Item *temp = parent->next;
    parent->next = temp->next;
    free(temp);
    return 1;
  }

return 0;
}
