#include "model.h"

int user::add(string user_id, string password)
{
	return 0;
}

int user::remove(string user_id)
{
	return 0;
}

int user::assign_station(string user_id, string station_id)
{
	return 0;
}

void station::add(string station_id)
{
	
}

void station::remove(string station_id)
{
}

bool station::search(string station_id)
{
}

void sensor::remove(string sensor_id)
{
}

void sensor::add(sensor * new_sensor)
{
	sensors.push_back(new_sensor);
}

sensor::sensor(string sens_id)
{
	sensor_id = sens_id;
}
