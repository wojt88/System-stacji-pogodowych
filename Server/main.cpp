#include "common.h"
#include "TCP_Server.h"
#include "communication.h"
#include "model.h"
#include <iostream>

int main()
{
	TCPServer tcp_server;
	communication *server;
	server= &tcp_server;

    
    server->start(1666);

	
	while(server->is_running()) 
	{ 
		Common::sleep(1); 
	}
    return 0;
}
