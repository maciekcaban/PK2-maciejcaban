#include <iostream>
#include "klasy.h"
//#include "tab.hpp"
#include <utility>
using namespace std;

int main()
{
	

	Zespolona W1(1,15);
	Zespolona W2(16, 22);
	Zespolona W3(0, 0);
	Zespolona W4(616, 9999);
	Zespolona W5(0, 0);
	int x;
	//W.setRE();
	x = W1.getRE();
	cout << x << endl;
	 

	

	W1.Wypisz();
	W2.Wypisz();

	cout << "******************" << endl;
	W1.swap(W1, W2);
	W1.Wypisz();
	W2.Wypisz();
	W3.Wypisz();

	W3.Zespolona::Zespolona (W1);
	W3.Wypisz();

	cout << Zespolona::LicznikZespolonych << endl;
	std::cout << "Hello World!\n";

	cout << "******************" << endl;
	
	W5.Wypisz();
	W4.Wypisz();

	cout << "******************" << endl;
	//W4.Zespolona::Zespolona(W5);
	W5.Wypisz();
	W4.Wypisz();
}

