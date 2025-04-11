#include "server.h"

int setupServer(Server *s){
  //get socket
  if(s->socket = socket(s->domain, s->type, s->protocal) < 0){
    printf("FATAL: Failed to get a socket!! \n");
    return -1;
  }

  //bind socket
  if(bind(s->socket, (struct sockaddr *) &s->server_address, sizeof(s->server_address)) < 0){
    printf("FATAL: Failed to get a bind!! \n");
    return -1;
  }
}

int luachServer(Server *s){
  
  //listen
  listen(s->socket, NULL);

  //accept
  int newsocket = accept(s->socket,(struct sockaddr *)& s->address, (socklen_t *) sizeof(s->address) < 0);

  //send/respond
  
  //close
}