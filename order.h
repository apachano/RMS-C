#include <stdio.h>
#include <time.h>

typedef struct timestamp* Timestamp;

struct timestamp{ //structure that stores time stamp information for an order
  int date;
  int timeinit;
  int timestore;
  int timepay;
  int timecomp;
  int timepresent;
}

typedef struct order* Order;

struct order{ //structure to store information on an order
  Timestamp timestamp;
  int store;
  int regi;
  int uid;
  Item item;
}

typedef struct item Item;

struct item{ //Structure to store information on an item
  int itemid;
  int quantity;
  Item next;
}

//Begin function prototyping
// ----- Register Initiation -----
int initateregister(); //Initiates variables for register use

int initiatemenu(); //initiates menu data

// ------- Order functions -------
Order initiateorder(int store, int regi, int uid); //Creates a new order

int storeorder(Order); //Stores an order in the order que
Order loadorder(); //Loads an order from order que
int comporder(Order); //Marks order as complete and removes from order que
//Item manipulation
int additem(Order, int itemid, int quantity);
int setitem(Order order, int itemid, int quantity);
int voiditem(Order order, int itemid);
//Supplimental functions
int timestamp();
