#pragma once
#include "common.h"
#include "TCP_Server.h"
#include "Commands.h"

class TCPServer;

class ConnectedClient
{
public:
    ConnectedClient(TCPServer* server, int connected_socket, uint32_t ip, uint16_t port);
    virtual ~ConnectedClient();
    virtual void disconnect();   
	virtual void putline(string str);
    virtual string getline(bool asterisks = false);

	virtual bool is_running() { return _is_running; };
	virtual void stop() { _is_running = false; }
	virtual void start() { _is_running = true; }
	vector<Command*> listCommands();
	TCPServer* getServer() { return server; }
	string getUser() { return user; }

protected:
    static void* run(void *);
	
private:
    uint32_t ip;
    uint16_t port;
    int connected_socket;
    string user, pass;
    pthread_t thread_id;
	volatile bool _is_running;
    TCPServer* server;
};