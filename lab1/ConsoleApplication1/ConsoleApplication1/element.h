#include <iostream>
#include <stack>
//#include "Stos.cpp"

using namespace std;

class elementListy
{
	Zespolona Zesp;
	Zespolona* WZesp;

public:
	Zespolona getZesp() { return Zesp; };
	Zespolona &getWZesp() { return *WZesp; };

	void setZesp(const Zespolona& _Zesp) { Zesp = _Zesp; };
	void setWZesp(Zespolona* _WZesp) { WZesp = _WZesp; };

	elementListy(Zespolona _Zesp, Zespolona *_WZesp) 
		: Zesp(_Zesp), WZesp(_WZesp) {cout << "konstruktor wielo argumentowy" << endl; };

	
};

class StosZesp
{
private: 
	stack <Zespolona> Stos;

public:
	void dodajNaStos(StosZesp &_StosZesp, Zespolona _Zesp)
	{
		_StosZesp.Stos.push(_Zesp);
	};
	Zespolona ZdejmijZeStosu(StosZesp &_StosZesp)
	{
		Zespolona x;
		x= _StosZesp.Stos.top();
		_StosZesp.Stos.pop();
		return x;
	}

};
