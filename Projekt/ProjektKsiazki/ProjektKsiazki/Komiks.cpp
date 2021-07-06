#include <iostream>
#include <fstream>
#include <string>
#include "klasy.h"
#include <cstdlib>
#include <vector>
using namespace std;


Komiks::Komiks(char _ID, string A1, string A2, string G1, string G2, string _tytul, string _gatunek, string _podGatunek, string _Wydawnictwo, int DW1, int DW2,
	priorytet _priorytet, string _uwagi, double _ocena)
	:Pismo(_ID, A1, A2, _tytul, _gatunek, _Wydawnictwo, DW1, DW2, _priorytet, _uwagi, _ocena)
{
	Autor Graf(G1, G2);
	grafik = Graf;

	podgatunek = _podGatunek;

}

Komiks::~Komiks() {}

Komiks::Komiks() :Pismo()
{
	string S = "x";
	int D = -1;

	Autor Graf(S, S);
	grafik = Graf;

	Gatunek Gat1(S);
	podgatunek = Gat1;

	
}

void Komiks::WyswietlPismo()

{
	cout << ID << " ";
	autor_pozycji.wyswietlAutora();
	grafik.wyswietlAutora();

	cout << " " << tytul << " ";
	gatunek.wyswietlGatunek();
	podgatunek.wyswietlGatunek();
	wydawnictwo.wyswietlWydawnictwo();
	data_wydania.wyswietlDate();
	

	switch (prior)
	{
	case priorytet::brak: cout << "brak" << endl;
		break;
	case priorytet::niski: cout << "niski" << endl;
		break;
	case priorytet::sredni: cout << "sredni" << endl;
		break;
	case priorytet::wysoki: cout << "wysoki" << endl;
		break;
	case priorytet::bardzo_wysoki: cout << "bardzo wysoki" << endl;
		break;
	case priorytet::obowiazkowy: cout << "obowiazkowy" << endl;
		break;
	default:
		cout << "nie nadano" << endl;
		break;
	}

	cout << " " << inne_uwagi << " ";
	cout << " " << moja_ocena << " ";
	cout << endl;
}

void Komiks::DodajPismo()
{
	string _imie, _nazwisko, _gatunek, _podGatunek, _Wydawnictwo, _uwagi;
	int _miesiac_wydania, _rok_wydania;
	priorytet _priorytet;
	int x;

	ID = 'C';

	cout << "Podaj imie autora" << endl;
	cin >> _imie;
	cout << "Podaj nazwisko autora" << endl;
	cin >> _nazwisko;
	Autor _autor(_imie, _nazwisko);
	autor_pozycji = _autor;

	cout << "Podaj imie grafika" << endl;
	cin >> _imie;
	cout << "Podaj nazwisko grafika" << endl;
	cin >> _nazwisko;
	Autor _graf(_imie, _nazwisko);
	grafik = _graf;

	cout << "podaj tytul" << endl;
	cin >> tytul;

	cout << "podaj gatunek" << endl;
	cin >> _gatunek;
	Gatunek Gat1(_gatunek);
	gatunek = Gat1;

	cout << "podaj podgatunek" << endl;
	cin >> _podGatunek;
	Gatunek Gat2(_podGatunek);
	podgatunek = Gat2;


	cout << "podaj wydawnictwo" << endl;
	cin >> _Wydawnictwo;
	Wydawnictwo Wyd(_Wydawnictwo);
	wydawnictwo = Wyd;

	cout << "podaj miesiac wydania" << endl;
	cin >> _miesiac_wydania;
	cout << "podaj rok wydania" << endl;
	cin >> _rok_wydania;
	Data Dat1(_miesiac_wydania, _rok_wydania);
	data_wydania = Dat1;


	cout << "podaj priorytet" << endl;
	cout << "5-obowiazkowy,		4-bardzo wysoki,	3-wysoki,	2-sredni,	1-niski,	cos innego-brak" << endl;
	cin >> x;
	switch (x)
	{
	case 1: _priorytet = priorytet::niski;
	case 2: _priorytet = priorytet::sredni;
	case 3: _priorytet = priorytet::wysoki;
	case 4: _priorytet = priorytet::bardzo_wysoki;
	case 5: _priorytet = priorytet::obowiazkowy;
	default:
		_priorytet = priorytet::brak;
		break;
	}
	prior = _priorytet;


	cout << "inne uwagi" << endl;
	cin >> inne_uwagi;
	cout << "oceñ" << endl;
	cin >> moja_ocena;


	//dodawanie do listy
}

//void Komiks::WyczyscKryteria()
//{
//	string  S = "x";
//	int D = -1;
//
//	ID = 'x';
//
//	Autor _autor(S, S);
//	autor_pozycji = _autor;
//
//	grafik = _autor;
//
//	tytul = S;
//
//	Gatunek Gat1(S);
//	gatunek = Gat1;
//
//	Gatunek Gat2(S);
//	podgatunek = Gat2;
//
//	Wydawnictwo Wyd(S);
//	wydawnictwo = Wyd;
//
//	Data DWYD(D, D);
//	data_wydania = DWYD;
//
//	prior = priorytet::nie_nadano;
//	inne_uwagi = S;
//	moja_ocena = D;
//}

bool Komiks::operator==(Komiks K2)
{

	if (autor_pozycji == K2.autor_pozycji)
	{
	}
	else
		return false;

	if (grafik == K2.grafik)
	{
	}
	else
		return false;

	if (tytul != K2.tytul and tytul != "x" and K2.tytul != "x")
		return false;

	if (gatunek == K2.gatunek)
	{
	}
	else
		return false;

	if (podgatunek == K2.podgatunek)
	{
	}
	else
		return false;

	if (wydawnictwo == K2.wydawnictwo)
	{
	}
	else
		return false;


	if (data_wydania == K2.data_wydania)
	{
	}
	else
		return false;

	if (prior != K2.prior and K2.prior != priorytet::nie_nadano)
		return false;

	if (moja_ocena != K2.moja_ocena and K2.moja_ocena != -1)
		return false;


	return true;
}

ostream& operator<<(ostream& wyjscie, const Komiks& K)
{
	wyjscie << K.ID << ";";
	wyjscie << K.autor_pozycji.imie << ";";
	wyjscie << K.autor_pozycji.nazwisko << ";";
	wyjscie << K.grafik.imie << ";";
	wyjscie << K.grafik.nazwisko << ";";
	wyjscie << K.tytul << ";";
	wyjscie << K.gatunek.nazwaGatunku << ";";
	wyjscie << K.podgatunek.nazwaGatunku << ";";
	wyjscie << K.wydawnictwo.nazwaWydawnictwa << ";";
	wyjscie << K.data_wydania.miesiac << ";";
	wyjscie << K.data_wydania.rok << ";";
	switch (K.prior)
	{
	case priorytet::brak: wyjscie << 0 << ";";
		break;
	case priorytet::niski: wyjscie << 1 << ";";
		break;
	case priorytet::sredni: wyjscie << 2 << ";";
		break;
	case priorytet::wysoki: wyjscie << 3 << ";";
		break;
	case priorytet::bardzo_wysoki: wyjscie << 4 << ";";
		break;
	case priorytet::obowiazkowy: wyjscie << 5 << ";";
		break;
	default:
		wyjscie << 6 << ";";
		break;
	}
	wyjscie << K.inne_uwagi << ";";
	wyjscie << K.moja_ocena << ";";
	wyjscie << endl;

	return wyjscie;
}

istream& operator>>(istream& wejscie, Komiks& K)
{
	string linia;
	char znak;
	int liczba;

	//getline(wejscie, linia, ';');
	//znak = linia[0];
	K.ID = 'M';

	getline(wejscie, linia, ';');
	K.autor_pozycji.imie = linia;

	getline(wejscie, linia, ';');
	K.autor_pozycji.nazwisko = linia;

	getline(wejscie, linia, ';');
	K.grafik.imie = linia;

	getline(wejscie, linia, ';');
	K.grafik.nazwisko = linia;

	getline(wejscie, linia, ';');
	K.tytul = linia;

	getline(wejscie, linia, ';');
	K.gatunek.nazwaGatunku = linia;

	getline(wejscie, linia, ';');
	K.podgatunek.nazwaGatunku = linia;

	getline(wejscie, linia, ';');
	K.wydawnictwo.nazwaWydawnictwa = linia;

	getline(wejscie, linia, ';');
	liczba = stoi(linia);
	K.data_wydania.miesiac = liczba;

	getline(wejscie, linia, ';');
	liczba = stoi(linia);
	K.data_wydania.rok = liczba;


	getline(wejscie, linia, ';');
	znak = linia[0];
	switch (znak)
	{
	case '0': K.prior = priorytet::brak;
		break;
	case '1': K.prior = priorytet::niski;
		break;
	case '2': K.prior = priorytet::sredni;
		break;
	case '3': K.prior = priorytet::wysoki;
		break;
	case '4': K.prior = priorytet::bardzo_wysoki;
		break;
	case '5': K.prior = priorytet::obowiazkowy;
		break;
	default:
		K.prior = priorytet::nie_nadano;
		break;
	}

	getline(wejscie, linia, ';');
	K.inne_uwagi = linia;

	getline(wejscie, linia, ';');
	liczba = stoi(linia);
	K.moja_ocena = liczba;

	getline(wejscie, linia);

	cout << "ok" << endl;

	return wejscie;
}

ostream&  Komiks::zapiszPismoDoPliku(ostream& wyjscie)
{
	wyjscie << ID << ";";
	wyjscie << autor_pozycji.imie << ";";
	wyjscie << autor_pozycji.nazwisko << ";";
	wyjscie << grafik.imie << ";";
	wyjscie << grafik.nazwisko << ";";
	wyjscie << tytul << ";";
	wyjscie << gatunek.nazwaGatunku << ";";
	wyjscie << podgatunek.nazwaGatunku << ";";
	wyjscie << wydawnictwo.nazwaWydawnictwa << ";";
	wyjscie << data_wydania.miesiac << ";";
	wyjscie << data_wydania.rok << ";";
	//wyjscie << Data_napisania.miesiac << ";";
	//wyjscie << Data_napisania.rok << ";";
	switch (prior)
	{
	case priorytet::brak: wyjscie << 0 << ";";
		break;
	case priorytet::niski: wyjscie << 1 << ";";
		break;
	case priorytet::sredni: wyjscie << 2 << ";";
		break;
	case priorytet::wysoki: wyjscie << 3 << ";";
		break;
	case priorytet::bardzo_wysoki: wyjscie << 4 << ";";
		break;
	case priorytet::obowiazkowy: wyjscie << 5 << ";";
		break;
	default:
		wyjscie << 6 << ";";
		break;
	}
	wyjscie << inne_uwagi << ";";
	wyjscie << moja_ocena << ";";
	wyjscie << endl;

	return wyjscie;
}