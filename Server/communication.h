#pragma once
#include "common.h"

class ConnectedClient;

class communication {

public :

	virtual void start(uint16_t port);
	virtual void stop();
	virtual bool is_running();
	virtual void send( string data);
	virtual string recieve();
	virtual vector<ConnectedClient*> listClients();
	virtual ConnectedClient* findClient(string client_name);
};