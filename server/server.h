typedef struct Server{
int type;
int domain;
int protocal;
int socket;
char buffer[100];
}Server;

int setupServer(Server *s);
int lauchServer(Server *s);