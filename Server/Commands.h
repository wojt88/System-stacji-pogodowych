#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "ConnectedClient.h"
using namespace std;

class ConnectedClient;

class Command
{
public:
	Command();
	Command(ConnectedClient *client, string t);
	virtual bool exec() = 0;
	virtual const string getName() { return string("undefined command"); }
	virtual const string getDescription() { return string("description is not available"); }
	virtual Command* create(ConnectedClient *client, string t) = 0;
	static vector<string> split(string str, const string& delimiter);

protected:
	vector<string> args; 
	ConnectedClient *client;
};


class CommandEngine
{
public:
	CommandEngine();
	virtual ~CommandEngine();
	virtual void registerCommand(Command *command);
	virtual bool exec(ConnectedClient *client, string t);
	virtual vector<Command*> listCommands();

protected:
	vector <Command*> commands;
};

