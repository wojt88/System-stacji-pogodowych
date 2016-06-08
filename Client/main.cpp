#include<iostream>   	//cout
#include<stdlib.h>
#include<fstream>   	// fstream
#include<stdio.h> 		//printf
#include<string.h>  	//strlen
#include<string> 		//string
#include<sys/socket.h>  //socket
#include<arpa/inet.h> 	//inet_addr
#include<netdb.h> 		//hostent
#include "tcp_client.h" // tcp_client heder
#include "czuj_temp.h"
#include <vector>
#include "w1_bus.h"

using namespace std;
using std::vector;

int main(int argc, char *argv[])
{
	string host= "wojt88.noip.me";
	int port = 1666;
	tcp_client client_tcp;
	czuj_temp temp_sens;

	client *wsk_c;
	czujnik *wsk_s;

	
	

	wsk_c = &client_tcp;
	wsk_s = &temp_sens;

	wsk_s -> szukaj_czujnika();


	liczba_czujnikow = strtol(ilosc_czujnikow.c_str(), NULL, 10);
	cout<<"f"<<liczba_czujnikow<<"f"<<endl;


	wsk_s -> przygotuj_dane();


	wsk_c -> conn(host, port);
	wsk_c -> send_data("station 3 28-0000052ceec2 22.187 C 28-0000052d0532 24 C 28-0000052cf81a 23.812 C");

	
	//receive and echo reply
	cout << "----------------------------\n";
	cout << client_tcp.receive(1024);
	cout << "\n\n----------------------------\n";
	//done
	return 0;
}
