#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <list>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/epoll.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SERVER_IP "127.0.0.1"

#define SERVER_PORT 8888

#define EPOLL_SIZE 5000

#define BUF_SIZE 0xFFFF

#define SERVER_WELCOME "Welcome you join to \
	the chat room! your Chat ID is: Client#%d"

#define SERVER_MESSAGE "ClientID %d say >> %s"

#define SERVER_PRIVATE_MESSAGE "Client %d say \
	to you privately >> %s"

#define SERVER_PRIVATE_ERROR_MESSAGE "Client \
	%d is not in the chat room yet."

#define EXIT "EXIT"

#define CAUTION "There is only one in the chat room."

/*
 *
 *
 */
static void addfd(int epollfd, int fd, bool enable_et)
{
    struct epoll_event ev;
    ev.data.fd = fd;
    ev.events = EPOLLIN;
    if (enable_et)
    {
        ev.events = EPOLLIN | EPOLLET;    
    }
    epoll_ctl(epollfd, EPOLL_CTL_ADD, fd, &ev);
    fcntl(fd, F_SETFL, fcntl(fd, F_GETFD, 0)|O_NONBLOCK);
    printf("fd added to epoll.\n");
    return;
}



#endif

