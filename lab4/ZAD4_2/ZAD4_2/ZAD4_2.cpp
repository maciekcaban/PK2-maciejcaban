#include <iostream>
#include <string>
#include <vector>
#include "klasy.h"

using namespace std;

int main()
{
	vector<pair <string, double>> Kantor;
	pair <string, double> E1;
	pair <string, double> E2;
	pair <string, double> E3;
	E1.first ="EUR";
	E1.second = 4.15;

	E2.first = "USD";
	E2.second = 3.8;

	E3.first = "PLN";
	E3.second = 1;

	Kantor.push_back(E1);
	Kantor.push_back(E2);
	Kantor.push_back(E3);




	FormaPlatnosci platnosc1(24,7);
	cin >> platnosc1;
	cout<< platnosc1;
	platnosc1.NaliczOpłatę();
	cout << platnosc1;

    std::cout << "Hello World!\n";
}
