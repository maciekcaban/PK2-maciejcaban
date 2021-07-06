#include <iostream>
#include "klasy.h"
using namespace std;

int main()
{
	Kalkulator Kal;
	Kal.NadajWartosci(Kal);
	Kal.Wypisz(Kal);

	int * tablica = new int[3];
	int x;
	cout << "podaj pierwsza liczbe: " << endl;
	cin >> x;
	*tablica = x;
	tablica++;

	cout << "podaj druga liczbe: " << endl;
	cin >> x;
	*tablica = x;

    std::cout << "Hello World!\n";
}
