#ifndef SERVER_H
#define SERVER_H

#include <string.h>
#include <common.h>

using namespace std;

class server
{
	public:
		server();

		void Init();

		void Close();

		void Start();
	private:
		int SendBroadcastMessage(int clientfd);
		struct sockaddr_in serverAddr;
		int listener;
		int epfd;
		list<int> clients_list;
};

#endif
