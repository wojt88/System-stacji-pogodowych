#include<iostream>   	//cout
#include"czujnik.h"

using namespace std;

class w1_bus
{
private:
	int liczba_czujnikow;
	string id_czujnika;
	int wartosc;
	string typ_danej;
public:
	void szukaj_czujnika();
};
