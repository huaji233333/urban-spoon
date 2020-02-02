#include <sys/types.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *host = "hq.sinajs.cn";
char *id = "sz002246";

int readHttp(int sockfd, char *data)
{
    char str[100] = "";
    read(sockfd, str, 9);
    memset(str, 0, sizeof(str));
    read(sockfd, str, 3);
    if(atoi(str) == 200){
        read(sockfd, str, 46);
        memset(str, 0, sizeof(str));
        read(sockfd, str, 3);

        int count = atoi(str);
        read(sockfd, str, 81);
        read(sockfd, data, count);

        return 0;
    }

    return -1;
}


int main()
{
    int sockfd;
    int len;
    char str[32];
    struct hostent *hptr = gethostbyname(host);
    printf("ip address = %s\n", inet_ntop(hptr->h_addrtype, hptr->h_addr, str, sizeof(str)));
    struct sockaddr_in address;
    int result;
    char strings[80];
    sprintf(strings, "GET /list=%s HTTP/1.1\r\nHost: %s\r\nConnection: close\r\n\r\n", id, host);

    char ch;
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = inet_addr(str);
    address.sin_port = htons(80);
    len = sizeof(address);
    result = connect(sockfd, (struct sockaddr *)&address, len);
    if(result == -1){
        perror("connect error");
        return 1;
    }

    char data[500] = "";
    while(1){

        write(sockfd, strings, strlen(strings));

        if(0 == readHttp(sockfd, data));
            printf("data = %s\n", data);
    }

    close(sockfd);

    return 1;
}

