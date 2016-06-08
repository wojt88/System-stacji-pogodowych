#include "Communication.h"
#include "common.h"
#include <iostream>

using namespace std;



void communication::start(uint16_t port)
{

}

void communication::stop()
{

}

bool communication::is_running() 
{
	return 0;
}

void communication::send( string data)
{

}

string communication::recieve()
{
	return string();
}


vector<ConnectedClient*> communication::listClients()
{
	return vector<ConnectedClient*>();
}

ConnectedClient * communication::findClient(string client_name)
{
	return nullptr;
}

