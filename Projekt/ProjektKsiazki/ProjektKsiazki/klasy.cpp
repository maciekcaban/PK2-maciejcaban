#include <iostream>
#include <fstream>
#include <string>
#include "klasy.h"
#include <cstdlib>
using namespace std;

Autor::Autor(string I, string N)
{
	imie = I;
	nazwisko = N;
}

Autor::Autor()
{
	imie = "x";
	nazwisko = "x";
}

void Autor::wyswietlAutora()
{
	cout << " " << imie << "  " << nazwisko<<" ";
}

Autor::~Autor() {
}

bool Autor::operator==(Autor A2)
{
	if (imie != A2.imie and A2.imie != "x")
		return false;
	if (nazwisko != A2.nazwisko and A2.nazwisko != "x")
		return false;
	return true;
}

Gatunek::Gatunek(string G)
{
	nazwaGatunku = G;
}

Gatunek::Gatunek()
{
	nazwaGatunku = "G";
}

void Gatunek::wyswietlGatunek()
{
	cout << " " << nazwaGatunku << "  ";
}

Gatunek::~Gatunek(){}

bool Gatunek::operator==(Gatunek G2)
{
	if (nazwaGatunku != G2.nazwaGatunku and G2.nazwaGatunku != "x")
		return false;
	return true;
}

Wydawnictwo::Wydawnictwo(string N)
{
	nazwaWydawnictwa = N;
}

Wydawnictwo::Wydawnictwo()
{
	nazwaWydawnictwa = "N";
}

void Wydawnictwo::wyswietlWydawnictwo()
{
	cout << " " << nazwaWydawnictwa << " ";
}

Wydawnictwo::~Wydawnictwo() {}

bool Wydawnictwo::operator==(Wydawnictwo W2)
{
	if (nazwaWydawnictwa != W2.nazwaWydawnictwa and W2.nazwaWydawnictwa != "x")
		return false;
	return true;
}

Data::Data(int M, int R)
{
	rok = R;
	miesiac = M;
}

Data::Data()
{
	rok = 1;
	miesiac = 1;
}

void Data::wyswietlDate()
{
	cout << " " << miesiac << "." << rok << " ";
}

Data::~Data() {}

bool Data::operator==(Data D2)
{
	if (miesiac != D2.miesiac and D2.miesiac != -1)
		return false;
	if (rok != D2.rok and D2.rok != -1)
		return false;
	return true;
}

