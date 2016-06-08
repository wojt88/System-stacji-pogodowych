#include<iostream>   	//cout
#include"czujnik.h"

using namespace std;

class czuj_temp :public czujnik


{
private:
	string ilosc_czujnikow;
	int liczba_czujnikow;
	string id_czujnika;
	int wartosc;
	string typ_danej;

public:
	czuj_temp();
	//void szukaj_czujnika();
	void przygotuj_dane();
};
