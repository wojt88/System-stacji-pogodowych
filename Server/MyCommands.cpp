#include "MyCommands.h"
#include <cassert>

CommandEngine::CommandEngine()
{
	this->registerCommand(new CmdHelp());
	this->registerCommand(new CmdExit());
	this->registerCommand(new CmdList());
	this->registerCommand(new CmdMsg());
	this->registerCommand(new CmdDummy());
	this->registerCommand(new CmdTest());
	this->registerCommand(new CmdStation());
}


bool CmdTest::exec() 
{ 
	//assert(0);
	client->putline("Test OK!");
	return true; 
}


bool CmdDummy::exec() 
{ 
	return true; 
}


bool CmdExit::exec() 
{ 
	client->stop(); 
	return true; 
}

bool CmdHelp::exec() 
{  
	vector<Command*> list = client->listCommands();
	for(vector<string>::size_type i = 0; i<list.size(); ++i)
		client->putline(Common::EOLN + list.at(i)->getName() + " (" + getDescription() + ")" + Common::EOLN);
	return true;
}

bool CmdList::exec()
{
	vector<ConnectedClient*> clients = client->getServer()->listClients();
	for(vector<ConnectedClient*>::size_type i = 0; i<clients.size(); ++i)
		client->putline(Common::EOLN + clients.at(i)->getUser());
	return true;
}

bool CmdMsg::exec()
{
	if(args.size() < 3) return false;
	ConnectedClient* remote = client->getServer()->findClient(args.at(1));
	if(remote == NULL) return false;
	remote->putline(Common::EOLN + client->getUser() + ": " + args.at(2));
	return true;
}


bool CmdStation::exec()
{	
	if(args.size() < 5) return false;
	
	else{
		sensor* sensors; 
		sensors->add(new sensor(""));
/*
		for (auto it = sensor.sensors.begin(); it != sensors.end(); ++it)
		{
			if (*it == client)
			{
				sensors.erase(it);
				//delete client;
				return;
			}
		}

	*/	
		//if ()
	//	for (int i = 4; i < (2*stoi(args.at(3))+4); i += 2) {
	//	}
		client->putline(Common::EOLN +"lol"+ args.at(1));
	}
	return true;
}

