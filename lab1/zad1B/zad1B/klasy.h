#include <iostream>
#include <utility>
using namespace std;


class Zespolona
{
	int RE;
	int IM;
public: 
	static int LicznikZespolonych;

	void setRE();
	void setIM();
	int getRE();
	int getIM();
	Zespolona();
	Zespolona(int);
	Zespolona(int, int);
	~Zespolona();
	Zespolona(const Zespolona &p){
		RE = p.RE;
		IM = p.IM;
	}

	/*Zespolona(Zespolona & a)
	{
		Zespolona pom = a;
		a.RE = RE;
		a.IM = IM;
		IM = pom.IM;
		RE = pom.RE;

	}*/

	
	void swap(Zespolona & a, Zespolona & b)
	{
		Zespolona  tmp = move(a);	 // konstruktor przenosz¹cy 
		a = move(b);				 // przenosz¹cy operator przypisania
		b = move(tmp);				 // przenosz¹cy operator przypisania
	}
	void Wypisz();

};
int Zespolona::LicznikZespolonych = 0;

void Zespolona::setRE()
{
	cout << "podaj RE" << endl;
	cin >> RE;
}

void Zespolona::setIM()
{
	cout << "podaj IM" << endl;
	cin >> IM;
}

int Zespolona::getRE()
{
	return RE;
}

int Zespolona::getIM()
{
	return IM;
}

Zespolona::Zespolona()
{
	LicznikZespolonych++;
}

Zespolona::Zespolona(int _RE)
{
	LicznikZespolonych++;
	RE = _RE;
}

Zespolona::Zespolona(int _RE,int _IM)
{
	RE = _RE;
	IM = _IM;
	LicznikZespolonych++;
}

Zespolona::~Zespolona()
{
	LicznikZespolonych--;
	cout << "destrukcjaaaaaaaaa" << endl;
}

inline void Zespolona::Wypisz()
{
	cout << "liczba zespolona  " << RE << "   " << IM << endl;
}
