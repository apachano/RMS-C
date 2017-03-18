//Author :Austin Pachano
//http://www.github.com/apachano
//Rev    :03/18/2017

typedef struct regi{
  int regiid;
  int store;
  int uid;
  int status;
} Regi;

Regi initiateregister();

//Status codes
//0 - Inactive
//1 - Active
//2 - Paused
