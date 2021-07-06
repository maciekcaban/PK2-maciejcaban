#include <iostream>
#include "klasy.h"
using namespace std;


int main()
{
	
	complex A(5,7), B(11,5);
	cout << B.IM << endl;

	B+=(A,B);
	cout << B.IM << endl;

	cout << B.RE << endl;
	B.RE = B.complex::operator++ ();

	cout << B.RE << endl;

	if (A > B)
	{
		cout << A.RE << " " << A.IM << " wieksza" << endl;
	}
		else
	{
		cout << B.RE << " " << B.IM << " wieksza" << endl;
	}


    std::cout << "Hello World!\n";

	if(A==B)
	{ 
		cout << "sa rowne" << endl;
	}
		else
	{
		cout << "nie sa rownie" << endl;
	}

	if (A != B)
	{
		cout << "nie sa rownie" << endl;
	}
		else
	{
		
		cout << "sa rowne" << endl;
	}

	complex C(10, 10);
	complex D(10, 10);


	if (C == D)
	{
		cout << "sa rowne" << endl;
	}
		else
	{
		cout << "nie sa rownie" << endl;
	}

	if (C != D)
	{
		cout << "nie sa rownie" << endl;
	}
		else
	{

		cout << "sa rowne" << endl;
	}

	cout << "******************" << endl << endl;
	cout << C << endl;

	D = D + C;
	cout << D << endl;
	
	D = D - C;
	cout << D << endl;

	D = A;
	cout << D << endl;


	D(51,77);
	cout << D << endl;


}

