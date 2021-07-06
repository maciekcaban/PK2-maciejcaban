#include <iostream>
#include <string>
using namespace std;

class liczba
{
public:
	int x;
	virtual void wypisz()=0;
	virtual void stworzZapis()=0;
};

class binarna : public liczba
{
	string zapisLiczby;
public:
	virtual void stworzZapis();
	virtual void wypisz();
	binarna(int);
};
