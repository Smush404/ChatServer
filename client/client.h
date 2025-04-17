#include <stdio.h>

typedef struct Client{
char buff[100];
int domain;
int protcal;
int type;
int socket;
}Client;

int connectClient(Client *c);