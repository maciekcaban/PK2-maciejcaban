#include <iostream>
#include <string>
using namespace std;

class FormaPlatnosci
{
	double kwota;
	double prowizja;
	string waluta;
	double kwotaWlasciwa;

public:
	FormaPlatnosci();
	FormaPlatnosci(double, double);
	//void WykonajP³atnoœæ();
	void NaliczOp³atê();
	friend istream& operator>> (istream&, FormaPlatnosci&);
	friend ostream& operator<< (ostream&, FormaPlatnosci&);
};


void FormaPlatnosci::NaliczOp³atê()
{
	if (prowizja != 0)
		kwotaWlasciwa = kwota-kwota * prowizja;
	else
		kwotaWlasciwa = kwota;
}

FormaPlatnosci::FormaPlatnosci()
{
	kwota = 0;
	prowizja = 0;
	waluta = "";
}

FormaPlatnosci::FormaPlatnosci(double K, double P)
{
	kwota = K;
	prowizja = P;
	//waluta = W;
	kwotaWlasciwa = 0;
}

inline istream& operator>> (istream &wejscie, FormaPlatnosci& P)
{
	cout << "podaj kwote: " << endl;
	wejscie >> P.kwota;
	cout << "prowizje : " << endl;
	wejscie >> P.prowizja;
	cout << "podaj walute: " << endl;
	wejscie >>P.waluta;


	return wejscie;
}

inline ostream& operator<< (ostream &wyjscie, FormaPlatnosci& P)
{
	wyjscie << "kwota: " << P.kwota << "  prowizja: " << P.prowizja << "  kwotaWlasciwa: " << P.kwotaWlasciwa << "  waluta: "<<P.waluta<<endl;
	return wyjscie;
}