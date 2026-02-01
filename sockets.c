/* sockets.c */
#include <stdio.h>
#define IP "142.251.43.35" /* www.google.se */
#define PORT 80 /* http*/
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>


int main()
{
    int s;
    struct sockaddr_in sock;
    s = socket(AF_INET, SOCK_STREAM, 0);
    if (s < 0)
    {
        printf("socket() error \n");
        return -1;
    }

    sock.sin_addr.s_addr = inet_addr(IP);
    sock.sin_port = htons(PORT);
    sock.sin_family = AF_INET;

    if(connect(s, (struct sockaddr *)&sock, sizeof(struct sockaddr_in))!=0)
    {
        printf("connect() error\n");
        close(s);
        return -1;
    }
    close(s);
    return 0;
}