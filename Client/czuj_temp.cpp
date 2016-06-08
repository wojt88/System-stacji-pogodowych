#include<iostream>   	//cout
#include<fstream>
#include<stdio.h> 		//printf
#include<string> 		//string
#include<cstdlib>
#include<stdlib.h>		// system
#include"czuj_temp.h"
#include<sstream>		// string to int

using namespace std;

czuj_temp::czuj_temp()
{
	ilosc_czujnikow = "0";
	liczba_czujnikow = 0;
	id_czujnika = "czujnik_temp";
	wartosc = 0;
	typ_danej = "C";
}


void czuj_temp::szukaj_czujnika()
{
	system("./czytanie.sh");
	
	fstream plik("/sys/bus/w1/devices/w1_bus_master1/w1_master_slave_count", ios::in);
	getline(plik, ilosc_czujnikow);

	if (plik.good()==false)
	{
		cout<<"Plik nie istnieje";
		exit(0);
	}
	plik.close();
};

void czuj_temp::przygotuj_dane()
{
	liczba_czujnikow = strtol(ilosc_czujnikow.c_str(), NULL, 10);
	//cout<<"f"<<liczba_czujnikow<<"f"<<endl;
//	int i;
//	for (i=1; i<= liczba_czujnikow; i++)


};

