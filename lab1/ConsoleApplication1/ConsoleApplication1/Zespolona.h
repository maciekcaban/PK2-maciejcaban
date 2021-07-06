#include <iostream>
using namespace std;

class Zespolona
{
private:
	int RE, IM;
	static int licznik;

public:
	int getIM() { return IM; };
	int getRE() { return RE; };

	void setIM(const int& _IM) { IM = _IM; };
	void setRE(const int& _RE) { IM = _RE; };

	void operator=(Zespolona Zesp) {
		IM = Zesp.getIM();
		RE = Zesp.getRE();
	};

	~Zespolona() { licznik--; cout << "destrukcjaaaaa" << endl; };
	Zespolona() { RE = 0; IM = 0; cout << "konstruktor bez argumentowy" << endl; };
	Zespolona(int _RE) { RE = _RE; IM = 0; licznik++;  cout << "konstruktor 1 argumentowy" << endl; };
	Zespolona(int _RE, int _IM) : RE(_RE), IM(_IM) { licznik++;  cout << "konstruktor wielo argumentowy" << endl; };
	Zespolona(const Zespolona& p) :RE(p.RE), IM(p.IM) { licznik++;  cout << "konstruktor kopiuj¹cy argumentowy" << endl; };
};