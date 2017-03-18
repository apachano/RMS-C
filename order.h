//Author :Austin Pachano
//http://www.github.com/apachano
//Rev    :03/18/2017

#include "menu.h"

/* ASCII ART DIAGRAM FOR ORDER STRUCTURE

|======|  |->|===========| |->|===========|
|Order |  |  |Item       | |  |Item       |
|REgi  |  |  |Next       >-|  |Next       >-
|Item  >--|  |Quantity   |    |Quantity   |
|Time  |     |Special    |    |Special    |
|==|===|     |Ingredients|    |Ingredients|
   |         |====|======|    |====|======|
   |              |                |
|==|======|  |====|=====|     |====|=====|
|TimePunch|  |Ingredient|     |Ingredient|
|         |  |next      |     |Next      |
|=========|  |====|=====|     |====|=====|
                  |                |
*/

typedef struct timestamp* Timestamp;

struct timestamp{ //structure that stores time stamp information for an order
  int date;
  int timeinit;
  int timestore;
  int timepay;
  int timecomp;
  int timepresent;
};


typedef struct ingredient Ingredient;

struct ingredient{ //Linked List to store Ingredients
  int itemid;
  int quantity;
  Ingredient *next;
};


typedef struct item Item;
struct item{ //Structure to store information on an item
  int itemid;
  int quantity;
  int special;
  int promo;
  Item *next;
  Ingredient *ingredient;
};

typedef struct order Order;

struct order{ //structure to store information on an order
  Timestamp *timestamp;
  int store;
  int regi;
  int uid;
  Item *item;
};

//Begin function prototyping
// ------- Order functions -------
Order *initiateorder(int store, int regi, int uid); //Creates a new order

Item *findparent(Item *item, int itemid);

//Item manipulation
int additem(Menu *menu, Order *order, int itemid, int quantity);
int voiditem(Menu *menu, Order *order, int itemid);
