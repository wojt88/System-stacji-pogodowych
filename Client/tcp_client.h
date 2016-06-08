#include<iostream>   	//cout
#include<stdlib.h>
#include<fstream>   	//fstream
#include<stdio.h> 		//printf
#include<string.h>  	//strlen
#include<string> 		//string
#include<sys/socket.h>  //socket
#include<arpa/inet.h> 	//inet_addr
#include<netdb.h> 		//hostent
#include"client.h"

using namespace std;

class tcp_client : public client

{
private:
	int sock;
	std::string address;
	int port;
	struct sockaddr_in server;

public:
	tcp_client();
	bool conn(string, int);
	bool send_data(string data);
	string receive(int);
};
