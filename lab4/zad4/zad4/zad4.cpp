#include <iostream>
#include "efekty.h"
#include "liczba.h"
using namespace std;

int main()
{
	Wybuch E1(5);
	Efekt *Wskaznik;

	Wskaznik = &E1;
	Wskaznik->wywolaj();

	binarna B1(17);
	liczba *WSK;

	WSK = &B1;
	WSK->wypisz();
	WSK->stworzZapis();
	WSK->wypisz();


    std::cout << "Hello World!\n";
}
