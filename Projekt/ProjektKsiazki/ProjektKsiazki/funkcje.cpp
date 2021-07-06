#include <iostream>
#include <fstream>
#include <string>
#include "klasy.h"
#include <cstdlib>
#include <vector>
using namespace std;


Lista WczytajListeZPliku(Lista &L1, string nazwa_pliku)
{
	ifstream plik (nazwa_pliku);

	Ksiazka _Ksiazka;
	Komiks _Komiks;
	Czasopismo _Czasopismo;

	Ksiazka *x = nullptr;
	Komiks *y = nullptr;
	Czasopismo *c = nullptr;

	string linia;
	char znak;
	int liczba;
	
	while (plik.eof()==false)
	{
		//cout << "rozpoczynam" << endl;		//dla testu
		getline(plik, linia, ';');
		znak = linia[0];

		switch (znak)
		{
		case 'K': 
		{
			plik >> _Ksiazka;
			Ksiazka *x = new Ksiazka(_Ksiazka);
			L1.zapiszDoListy(x);
			break; 
		}

		case 'M': 
		{
			plik >> _Komiks;
			Komiks *y = new Komiks(_Komiks);
			L1.zapiszDoListy(y);
			break; 
		}
		case 'C':
		{
			plik >> _Czasopismo;
			Czasopismo *c = new Czasopismo(_Czasopismo);
			L1.zapiszDoListy(c);
			break;
		}
		default: break;
		}

	}

	plik.close();
	return L1;
}

