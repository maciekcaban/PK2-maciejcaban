#include <iostream>
#include "efekty.h"
using namespace std;

void Ogien::wywolaj()
{
	cout << "Plomienieeeeeeeeee" << endl;
}

Ogien::Ogien(int _x)
{
	x = _x;
}

void Deszcz::wywolaj()
{
	cout << "pada deszcz pada deszcz" << endl;
}

Deszcz::Deszcz(int _x)
{
	x = _x;
}

void Wybuch::wywolaj()
{
	cout << "Booooooooooooooooooooooooooooooooooooom, takie wielkie" << endl;
}

Wybuch::Wybuch(int _x)
{
	x = _x;
}

void Blysk::wywolaj()
{
	cout << "Flashbang" << endl;
}

Blysk::Blysk(int _x)
{
	x = _x;
}

void Dym::wywolaj()
{
	cout << "Nic nie widac" << endl;
}

Dym::Dym(int _x)
{
	x = _x;
}