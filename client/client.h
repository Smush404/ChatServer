typedef struct Client{
char buff[100];
int socket;
}Client;

int connectClient(Client *c);