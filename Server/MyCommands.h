#pragma once

#include "Commands.h"
#include "common.h"
#include "model.h"

class CmdTest : public Command
{
public:
	CmdTest(ConnectedClient *client, string t) : Command(client, t) { }
	CmdTest() : Command() { }
	Command* create(ConnectedClient *client, string t) { return new CmdTest(client, t); }
	const string getName() { return "test"; }
	bool exec();
};



class CmdHelp : public Command
{
public:
	CmdHelp(ConnectedClient *client, string t) : Command(client, t) { }
	CmdHelp() : Command() { }
	Command* create(ConnectedClient *client, string t) { return new CmdHelp(client, t); }
	const string getName() { return "help"; }
	bool exec();
};

class CmdDummy : public Command
{
public:
	CmdDummy(ConnectedClient *client, string t) : Command(client, t) { }
	CmdDummy() : Command() { }
	Command* create(ConnectedClient *client, string t) { return new CmdDummy(client, t); }
	const string getName() { return "dummy"; }
	bool exec();
};


class CmdExit : public Command
{
public:
	CmdExit(ConnectedClient *client, string t) : Command(client, t) { }
	CmdExit() : Command() { }
	Command* create(ConnectedClient *client, string t) { return new CmdExit(client, t); }
	const string getName() { return "exit"; }
	bool exec();
};

class CmdList : public Command
{
public:
	CmdList(ConnectedClient *client, string t) : Command(client, t) { }
	CmdList() : Command() { }
	Command* create(ConnectedClient *client, string t) { return new CmdList(client, t); }
	const string getName() { return "list"; }
	bool exec();
};

class CmdMsg : public Command
{
public:
	CmdMsg(ConnectedClient *client, string t) : Command(client, t) { }
	CmdMsg() : Command() { }
	Command* create(ConnectedClient *client, string t) { return new CmdMsg(client, t); }
	const string getName() { return "msg"; }
	//const string getDescription() { return string("usage: <msg> <username> <text to send>"); }
	bool exec();
};


class CmdStation : public Command
{
public:
	CmdStation(ConnectedClient *client, string t) : Command(client, t) { }
	CmdStation() : Command() { }
	Command* create(ConnectedClient *client, string t) { return new CmdStation(client, t); }
	const string getName() { return "station"; }
	//const string getDescription() { return string("usage: <msg> <username> <text to send>"); }
	bool exec();
};
