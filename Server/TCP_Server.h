#pragma once
#include "common.h"
#include "ConnectedClient.h"
#include "Communication.h"
#include "Commands.h"


class ConnectedClient;
class CommandEngine;
class Command;

class TCPServer :public communication
{
public:
    TCPServer();
    virtual ~TCPServer();
    virtual void start(uint16_t port);
    virtual void stop();
	virtual bool is_running();

	virtual void send(ConnectedClient * client, string data);
	virtual string recieve(ConnectedClient * client);

	vector<ConnectedClient*> listClients();
	ConnectedClient* findClient(string client_name);

//	void send_msg_to_client(string remote);

protected:	
	friend class ConnectedClient;
    virtual void addClient(ConnectedClient * client);
    virtual void removeClient(ConnectedClient * client);    
	static void* run(void *); 
	CommandEngine *cmdEngine;
	vector<Command*> listCommands();

private:
    int my_socket;
	volatile bool _is_running;
    uint16_t port;
    pthread_t thread_id;
    vector<ConnectedClient*> clients;
};

