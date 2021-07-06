
#include <iostream>
using namespace std;

class plane {
public:
	double fuel;
	double distanceX;
	double distanceY;
	double distanceZ;
	double height;
	const double weight;

	//plane (double _fuel,double _x, double _y, double _z, double _height) : fuel(_fuel), distanceX(_x), distanceY(_y), distanceZ(_z), height(_height) {};
	void wypisz(plane S) {
		cout << S.distanceX << "  " << S.distanceY << "  " << S.distanceZ <<"  " <<S.height<<endl;
	};

	plane korekta(plane S, double K)
	{
		S.height = S.height - K;

		return S;
	};

};

class engine
{
	bool stan;
	int speed;
	int ID;
private:
	engine& engine::operator=(const T &)


};

engine& engine::operator=(const engine &o)
{
	if (this == &o)				// 1: przypisanie do samego siebie? Tom = Tom;
		return *this;



	return *this;				// 4: zwróć obiekt po przypisaniu
}

int main()
{
    std::cout << "Hello World!\n";

	/*plane samolot;
	samolot.distanceX = 17;
	samolot.distanceY = 92;
	samolot.distanceZ = 325;
	samolot.fuel = 51;
	samolot.height=75;
	
	samolot.plane::wypisz(samolot);

	double param = 15;
	plane drugi = samolot.plane::korekta(samolot,param);

	drugi.plane::wypisz(drugi);

	plane& plane::operator= (plane &drugi);
	*/


	return 0;
}


