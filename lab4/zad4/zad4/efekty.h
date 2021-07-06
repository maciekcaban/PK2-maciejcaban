#include <iostream>
using namespace std; 

class Efekt
{
public:
	virtual void wywolaj()=0;
};

class Ogien : public Efekt
{
	int x;
public:
	Ogien(int);
	virtual void wywolaj();
};

class Deszcz : public Efekt
{
	int x;
public:
	virtual void wywolaj();
	Deszcz(int);
};

class Wybuch : public Efekt
{
	int x;
public:
	virtual void wywolaj();
	Wybuch(int);
};

class Blysk : public Efekt
{
	int x;
public:
	virtual void wywolaj();
	Blysk(int);
};

class Dym : public Efekt
{
	int x;
public:
	virtual void wywolaj();
	Dym(int);
};
