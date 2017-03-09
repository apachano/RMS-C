#include "order.h"

Order initiateorder(int store, int regi, int uid)
{
  Order new = malloc(sizeof(struct order));
  new->regi = regi;
  new->uid = uid;
  new->store = store;
  new->item = NULL;
  return new;
}

// ----------- Code For File I/O ---------- //

int storeorder(Order);
{
  fp = fopen("/orders/que.text", "r+");
  fgets(buffer,120,fp);
  fprintf(fp, %i %i", store, regi);

  fclose(fp);
}

// ----- Code For Order Manipulation -----  //
Item finditem


int additem(Order order, int itemid, int quantity)
{
  Item new = malloc(sizeof(struct item));
  new->itemid = itemid;
  new->quantity = quantity;
  new->next = order->next;
  order->next = new;
}
int setitem(Order order, int itemid, int quantity)
{

}
int voiditem(Order order,  int itemid)
{
  if (order->item->itemid == itemid)
  {
    Item temp = order->item;
    order->item = order->item->next;
    free(temp);
  }
  else
  {
    voidrecursion(item, itemid);
  }
  return 1;
}
int voidrecursion(Item item, int itemid)
{
  if (item->next->itemid == itemid)
  {
    Item temp = item->next;
    Item->next = item->next->next;
    free(temp);
  }
  else
  {
    voidrecursion(item, itemid);
  }
}
