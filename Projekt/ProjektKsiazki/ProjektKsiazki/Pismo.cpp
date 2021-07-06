#include <iostream>
#include <string>
#include <fstream>
#include "klasy.h"
#include <cstdlib>
using namespace std;

Pismo::Pismo(char _ID, string A1, string A2, string _tytul, string _gatunek, string _Wydawnictwo, int D1, int D2, priorytet _priorytet, string _uwagi, double _ocena)
{
	ID = _ID;

	Autor _autor(A1, A2);
	autor_pozycji = _autor;


	tytul = _tytul;

	Gatunek Gat1(_gatunek);
	gatunek = Gat1;

	Wydawnictwo Wyd(_Wydawnictwo);
	wydawnictwo = Wyd;

	Data DWYD(D1, D2);
	data_wydania = DWYD;


	prior = _priorytet;
	inne_uwagi = _uwagi;
	moja_ocena = _ocena;
}

Pismo::Pismo()
{
	string S1 = "x";
	int D = -1;

	ID = 'x';

	Autor _autor(S1, S1);
	autor_pozycji = _autor;

	tytul = S1;

	Gatunek Gat1(S1);
	gatunek = Gat1;

	Wydawnictwo Wyd(S1);
	wydawnictwo = Wyd;

	Data DWYD(D, D);
	data_wydania = DWYD;


	prior = priorytet::nie_nadano;
	inne_uwagi = S1;
	moja_ocena = D;
}

Pismo::~Pismo() {}

void Pismo::WyswietlPismo()
{}
ostream& Pismo::zapiszPismoDoPliku(ostream& wejscie)
{
	return wejscie;
}

//void Pismo::DodajPismo()
//{
//	string _imie, _nazwisko, _gatunek, _Wydawnictwo, _uwagi;
//	int _miesiac_wydania, _rok_wydania, _miesiac_napisania;
//	priorytet _priorytet;
//	int x;
//
//	ID = 'K';
//
//	cout << "Podaj imie autora" << endl;
//	cin >> _imie;
//	cout << "Podaj nazwisko autora" << endl;
//	cin >> _nazwisko;
//	Autor _autor(_imie, _nazwisko);
//	autor_pozycji = _autor;
//
//	cout << "podaj tytul" << endl;
//	cin >> tytul;
//
//	cout << "podaj gatunek" << endl;
//	cin >> _gatunek;
//	Gatunek Gat1(_gatunek);
//	gatunek = Gat1;
//
//	cout << "podaj wydawnictwo" << endl;
//	cin >> _Wydawnictwo;
//	Wydawnictwo Wyd(_Wydawnictwo);
//	wydawnictwo = Wyd;
//
//	cout << "podaj miesiac wydania" << endl;
//	cin >> _miesiac_wydania;
//	cout << "podaj rok wydania" << endl;
//	cin >> _rok_wydania;
//	Data Dat1(_miesiac_wydania, _rok_wydania);
//	data_wydania = Dat1;
//
//	cout << "podaj priorytet" << endl;
//	cout << "5-obowiazkowy,		4-bardzo wysoki,	3-wysoki,	2-sredni,	1-niski,	cos innego-brak" << endl;
//	cin >> x;
//	switch (x)
//	{
//	case 1: _priorytet = priorytet::niski;
//	case 2: _priorytet = priorytet::sredni;
//	case 3: _priorytet = priorytet::wysoki;
//	case 4: _priorytet = priorytet::bardzo_wysoki;
//	case 5: _priorytet = priorytet::obowiazkowy;
//	default:
//		_priorytet = priorytet::brak;
//		break;
//	}
//	prior = _priorytet;
//
//
//	cout << "inne uwagi" << endl;
//	cin >> inne_uwagi;
//	cout << "oceñ" << endl;
//	cin >> moja_ocena;
//
//
//	//dodawanie do listy
//}


