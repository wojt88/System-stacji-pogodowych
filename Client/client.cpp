/* #include<iostream>   	//cout
#include<stdlib.h>		
#include<fstream>   	// fstream
#include<stdio.h> 		//printf
#include<string.h>  	//strlen
#include<string> 		//string
#include<sys/socket.h>  //socket
#include<arpa/inet.h> 	//inet_addr
#include<netdb.h> 		//hostent
#include "client.h" // tcp_client heder

using namespace std;

bool client::conn(string address, int port)
{
	//create socket if it is not already created
	if (sock == -1)
	{
		//Create socket
		sock = socket(AF_INET, SOCK_STREAM, 0);
		if (sock == -1)
		{
			perror("Could not create socket");
		}

		cout << "Socket created\n";
	}
	else {    }

	//setup address structure
	if (inet_addr(address.c_str()) == -1)
	{
		struct hostent *he;
		struct in_addr **addr_list;

		//resolve the hostname, its not an ip address
		if ((he = gethostbyname(address.c_str())) == NULL)
		{
			//gethostbyname failed
			herror("gethostbyname");
			cout << "Failed to resolve hostname\n";

			return false;
		}

		//Cast the h_addr_list to in_addr , since h_addr_list also has the ip address in long format only
		addr_list = (struct in_addr **) he->h_addr_list;

		for (int i = 0; addr_list[i] != NULL; i++)
		{
			//strcpy(ip , inet_ntoa(*addr_list[i]) );
			server.sin_addr = *addr_list[i];

			cout << address << " resolved to " << inet_ntoa(*addr_list[i]) << endl;

			break;
		}
	}

	//plain ip address
	else
	{
		server.sin_addr.s_addr = inet_addr(address.c_str());
	}

	server.sin_family = AF_INET;
	server.sin_port = htons(port);

	//Connect to remote server
	if (connect(sock, (struct sockaddr *)&server, sizeof(server)) < 0)
	{
		perror("connect failed. Error");
		return 1;
	}

	cout << "Connected\n";
	return true;
}

*/