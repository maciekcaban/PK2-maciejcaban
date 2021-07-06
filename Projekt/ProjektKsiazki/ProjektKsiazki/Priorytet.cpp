#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include "klasy.h"
using namespace std;

bool Tpriorytet::operator==(Tpriorytet P2)
{
	if (typ_priorytetu == P2.typ_priorytetu)
		return true;
	else
		return false;
}

int Tpriorytet::operator()()
{
	if (typ_priorytetu == "brak")
	{
		return 0;
	}
}

string& Tpriorytet::operator[](string w)
{
	//return Lista[w];
}