#include <iostream>
#include <fstream>
#include <string>
#include "klasy.h"
#include <cstdlib>
#include <vector>
using namespace std;

MenuListy::MenuListy()
{
	nazwa_pliku = "domyslna nazwa listy";
}


void MenuListy::WyborDzialania(Lista& L1,string nazwa_pliku)
{	
	while(true)
	{
		int dzialanie=0;
		cout << "wybierz funckje programu: " << endl;
		cout << "1	  - dodawanie ksiazek" << endl;
		cout << "2	  - dodawanie komiksow" << endl;
		cout << "3	  - dodawanie czasopism" << endl;
		cout << "4	  - filtrowanie" << endl;
		cout << "5 - wyswietlenie listy" << endl;
		cout << "9	  - zamkniecie programu" << endl;

		cin >> dzialanie;

		if (dzialanie == 1)
		{
			Ksiazka K99;
			K99.DodajPismo();
			Ksiazka *x = new Ksiazka(K99);
			L1.zapiszDoListy(x);
		}
		if (dzialanie == 2)
		{
			Komiks M99;
			M99.DodajPismo();
			Komiks *y = new Komiks(M99);
			L1.zapiszDoListy(y);
		}
		if (dzialanie == 3)
		{
			Czasopismo C99;
			C99.DodajPismo();
			Czasopismo *z = new Czasopismo(C99);
			L1.zapiszDoListy(z);
		}
		if (dzialanie == 4)
		{
			L1.FiltrujListe();
		}
		if (dzialanie == 5)
		{
			L1.wypiszListe();
		}
		if (dzialanie == 9)
		{
			L1.zapiszListeDoPliku(nazwa_pliku);
			return;
		}
		
	}
}


void MenuListy::DzialanieProgramu()
{
	cout << "Podaj nazwe pliku" << endl;
	cin >> nazwa_pliku;
	Lista L1;


	L1 = WczytajListeZPliku(L1, nazwa_pliku);
	WyborDzialania(L1, nazwa_pliku);
}


