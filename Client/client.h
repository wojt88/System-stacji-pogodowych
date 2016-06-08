#include<iostream>   	//cout
#include<stdlib.h> 			
#include<fstream>   	// fstream
#include<stdio.h> 		//printf
#include<string.h>  	//strlen
#include<string> 		//string
#include<sys/socket.h>  //socket
#include<arpa/inet.h> 	//inet_addr
#include<netdb.h> 		//hostent

using namespace std;

class client
{
private:
	int sock;
	std::string address;
	int port;
	struct sockaddr_in server;

public:
	virtual bool conn(string, int)=0;
	virtual bool send_data(string data)=0;
	string receive(int);
};
