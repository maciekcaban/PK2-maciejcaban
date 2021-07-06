#include <iostream>
#include <vector>
using namespace std; 

class listaZespolona
{
private:
	vector <Zespolona> kontener;

public:
	Zespolona get(int x) { return kontener[x]; };


	void dodaj(const Zespolona& Zesp) { kontener.push_back(Zesp); }
	void usun(int x) { kontener.erase(kontener.begin()+x); }


};
