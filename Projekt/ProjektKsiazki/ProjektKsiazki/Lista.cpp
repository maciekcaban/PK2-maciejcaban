#include <iostream>
#include <fstream>
#include <string>
#include "klasy.h"
#include <vector>
#include <cstdlib>
using namespace std;


void Lista::wypiszListe()
{
	Pismo * temp1 = head;

	int liczba;
	
	while (temp1 != nullptr)
	{

		
		temp1->WyswietlPismo();
		temp1 = temp1->next;
	}
	
}

void Lista::FiltrujListe()
{
	Pismo * temp1 = head;
	bool warunek = true;
	string _imieAutora,_nazwiskoAutora,_tytul,_gatunek,_wydawnictwo;
	int _rok;
	string linia;
	cout<< "gry jakas wartosc jest nieistotna podaj x (-1 dla roku wydania)" << endl;
	cout << "podaj imie autora" << endl;
	cin >> _imieAutora;
	cout << "podaj _nazwisko Autora" << endl;
	cin >> _nazwiskoAutora;
	cout << "podaj _tytul, zakoncz go ;" << endl;
	getline(cin, linia, ';');
	_tytul = linia;
	cout << "podaj _gatunek" << endl;
	cin >> _gatunek;
	cout << "podaj _wydawnictwo" << endl;
	cin >> _wydawnictwo;
	//cout << "podaj _rok" << endl;
	//cin >> _rok;


	while (temp1 != nullptr)
	{
		warunek = true;

		if (temp1->autor_pozycji.imie != _imieAutora and _imieAutora != "x")
		{
			warunek = false;
		}

		if (temp1->autor_pozycji.nazwisko != _nazwiskoAutora and _nazwiskoAutora != "x")
		{
			warunek = false;
		}

		if (temp1->tytul != _tytul and _tytul != "x")
		{
			warunek = false;
		}

		if (temp1->gatunek.nazwaGatunku != _gatunek and _gatunek != "x")
		{
			warunek = false;
		}

		if (temp1->wydawnictwo.nazwaWydawnictwa != _wydawnictwo and _wydawnictwo != "x")
		{
			warunek = false;
		}

		//if (temp1->data_wydania.rok!= _rok and _rok != -1)
		//{
		//	warunek = false;
		//}

		if (warunek)
		{
			temp1->WyswietlPismo();
		}

		

		temp1 = temp1->next;
	}

}

void Lista::zapiszDoListy(Pismo *P1)
{
	if (head == nullptr)
	{
		head = P1;
	}
	else
	{
		Pismo * temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
			//cout << temp << endl;
		}
		temp->next = P1;

	}
}

void Lista::zapiszListeDoPliku(string nazwa_pliku)
{
	Pismo * temp1 = head;
	std::fstream plik;


	plik.open(nazwa_pliku, std::ios::out);
	if (plik.is_open() == true)
	{
	while (temp1 != nullptr)
	{
		temp1->zapiszPismoDoPliku(plik);
		temp1 = temp1->next;
	}
	}
	plik.close();
}
