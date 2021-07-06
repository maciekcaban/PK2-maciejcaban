#include "tab.hpp"

tablicaZespolonych::tablicaZespolonych(int _x, int _y) :x(_x), y(_y) //u¿ycie listy inicjalizacyjnej
{
	this->tab = new Zespolona*[x];
	for(int i=0;i<x;i++)
		{
		 this->tab[i] = new Zespolona[y];
		}
}

tablicaZespolonych::tablicaZespolonych(const tablicaZespolonych & other)
{
	this->x = other.x;
	this->y = other.y;


	this->tab = new Zespolona*[x];

	for (int i = 0; i < x; i++)
	{
		this->tab[i] = new Zespolona[y];
		for (int j = 0; j < y; j++)
		{
			this->tab[i][j] = other.tab[i][j];
		}
	}
}

tablicaZespolonych::~tablicaZespolonych()
{
	for(int i=0;i<x;i++)
	{
		delete [] tab[i];
	}
	delete [] tab;
}

tablicaZespolonych & tablicaZespolonych::operator=(const tablicaZespolonych & other)
{
	if (this != &other)
	{
		for (int i = 0; i < x; i++)
		{
			delete[] tab[i];
		}
		delete[] tab;


		this->x = other.x;
		this->y = other.y;

		this->tab = new Zespolona*[x];

		for (int i = 0; i < x; i++)
		{
			this->tab[i] = new Zespolona[y];
			for (int j = 0; j < y; j++)
			{
				this->tab[i][j] = other.tab[i][j];
			}
		}
	}
	return* this;
}
