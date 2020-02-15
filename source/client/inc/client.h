#ifndef CLIENT_H
#define CLIENT_H

#include <string.h>
#include "common.h"

using namespace std;

class client 
{

public:
    client();
    void Connect();
    void Close();
    void Start();

private:
    int sock;
    int pid;
    int epfd;
    int pipe_fd[2];
    bool isClientWork;
    char message[BUF_SIZE];
    struct sockaddr_in serverAddr;
};

#endif
