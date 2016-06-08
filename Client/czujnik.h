#include <iostream>   	//cout

using namespace std;

class czujnik
{
private:
	string ilosc_czujnikow;
	int liczba_czujnikow;
	string id_czujnika;
	int wartosc;
	string typ_danej;

public:
	virtual void szukaj_czujnika()=0;
	virtual void przygotuj_dane()=0;
};
