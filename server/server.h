#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <pthread.h>
typedef struct Server{
struct sockaddr server_address;
int type;
int domain;
struct sockaddr_in address;
int protocal;
int socket;
char buffer[100];
}Server;

int setupServer(Server *s);
int lauchServer(Server *s);