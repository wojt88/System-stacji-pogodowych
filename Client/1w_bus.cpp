#include<iostream>   	//cout
#include<fstream>
#include<stdio.h> 		//printf
#include<string> 		//string
#include<cstdlib>
#include<stdlib.h>		// system
#include"czuj_temp.h"
#include<sstream>		// string to int

using namespace std;

void czuj_temp::szukaj_czujnika()
{
	string pliczek;
	system("./czytanie.sh");
	
	fstream plik("ile.txt", ios::in);
	getline(plik, pliczek);

	if (plik.good()==false)
	{
		cout<<"Plik nie istnieje";
		exit(0);
	}
	plik.close();
	
	liczba_czujnikow = strtol(pliczek.c_str(), NULL, 10);

};


