#pragma once
#include "common.h"




class user {

	string id;
	string password;
	vector<string> stations;

public:

	int add(string user_id, string password);
	int remove(string user_id);
	int assign_station(string user_id, string station_id);




};

class station {

	


public:

	string station_id;
	void add(string station_id);
	void remove(string station_id);
	bool search(string station_id);
	vector<sensor*> sensors;



};


class sensor: public station {


	string sensor_id;
	string unit;
	float value;

	
public:

	void remove(string sensor_id);
	void add(sensor* new_sensor);
	sensor(string sensor_id);

private:

	

};
