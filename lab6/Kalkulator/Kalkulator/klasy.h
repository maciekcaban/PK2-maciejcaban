#include <iostream>
using namespace std;

class Kalkulator
{
	int * tablica = new int[3];
	char Dzial;
	public:
	void NadajWartosci(Kalkulator&);
	void Wypisz(Kalkulator);

};

inline void Kalkulator::NadajWartosci(Kalkulator &K)
{
	int x;
	cout << "podaj pierwsza liczbe: " << endl;
	cin >> x;
	*tablica = x;
	tablica++;

	cout << "podaj druga liczbe: " << endl;
	cin >> x;
	*tablica = x;


}

void Kalkulator::Wypisz(Kalkulator K)
{
	for (int i = 0; i < 3; i++)
	{
		cout << *tablica << endl;
		tablica++;
	}
}