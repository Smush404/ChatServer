#include "client.h"

int connectClient(Client *c){
  char * serveraddr;

  //get socket
  if(c->socket = socket(c->domain, c->type, c->protcal) < 0){
    prtinf("Failed to get socket!!");
    return -1;
  }

  //connect to server
  printf("what is the IP: ");
  fgets(serveraddr, sizeof(serveraddr), stdin);

  //conect();

  //CHAT!!!!
}