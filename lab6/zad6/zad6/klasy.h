#include <iostream>
using namespace std;

class kalkulator
{
private:
	double pole1;
	double pole2;
	char dzialanie;
	double wynik;

public:
	//kalkulator();
	kalkulator(double, double, char);
	void wybor_dzialnia(kalkulator);
	//void dodawanie(kalkulator);
	void dzielenie(kalkulator);

};

inline kalkulator::kalkulator(double P1, double P2, char W) 
{
	pole1 = P1;
	pole2 = P2;
	dzialanie = W;
	wynik = 0;
}

void kalkulator::dzielenie(kalkulator K)
{
	try
	{
		if (pole2 == 0)
			throw 'a';
		wynik = pole1 / pole2;
	}
	catch (char)
	{
		cout << "nie dziel przez 0" << endl;
	}
	cout << "wynik to  " << wynik << endl;
}

void kalkulator::wybor_dzialnia(kalkulator K)
{
	dzielenie(K);
}