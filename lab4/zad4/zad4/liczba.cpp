#include <iostream>
#include "efekty.h"
#include "liczba.h"
using namespace std;


binarna::binarna(int _x)
{
	x = _x;
	zapisLiczby = "";
	
}

void binarna::stworzZapis()
{
	zapisLiczby = "";
	int _x = x;
	int r;
	char Z;

	while (_x != 0)
	{
		r = _x % 2;
		Z = r+48;
		zapisLiczby = Z + zapisLiczby;
		_x = _x / 2;
	}
}

void binarna::wypisz()
{
	cout << "zapis binbarny:  " << zapisLiczby << endl;
}