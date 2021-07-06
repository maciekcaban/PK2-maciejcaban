#include <iostream>
#include "klasy.h"
#include <utility>
using namespace std;

class tablicaZespolonych
{
	private:
		int x, y;

	public:
		Zespolona** tab;
		tablicaZespolonych(int, int);
		tablicaZespolonych(const tablicaZespolonych&);
		~tablicaZespolonych();
		tablicaZespolonych& operator=(const tablicaZespolonych&);

};