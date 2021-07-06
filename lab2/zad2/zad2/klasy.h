#include <iostream>
using namespace std;


class complex
{
public:
	int RE;
	int IM;

	complex();
	complex(int, int);
	friend bool operator== (complex, complex);
	friend bool operator!= (complex, complex);
	friend complex operator+= (complex, complex);
	int operator++ ();
	friend bool operator> (complex, complex);
	friend complex operator+ (complex, complex);
	friend complex operator- (complex, complex);

	complex& operator() (int,int);

	complex& operator= (const complex&);

	friend istream& operator>> (istream&, complex&);
	friend istream& operator<< (istream&, complex&);

};


inline complex::complex()
{
	RE = 0;
	IM = 0;
}

inline complex::complex(int _RE, int _IM)
{
	RE = _RE;
	IM = _IM;
}


inline istream& operator>> (istream &wejscie, complex& Zesp)
{
	wejscie >> Zesp.RE >> Zesp.IM;
	return wejscie;
}

inline ostream& operator<< (ostream &wyjscie, complex& Zesp)
{
	wyjscie << "RE:  " << Zesp.RE << "  IM: " << Zesp.IM << endl;
	return wyjscie;
}

inline complex& complex::operator() (int A, int B)
{
	RE = A;
	IM = B;
	return *this;
}

inline complex operator+= (complex A, complex B) {				
	B.RE = B.RE + A.RE;
	B.IM = B.IM + A.IM;

	return B;
}
//nwm

inline int  complex::operator++ ()
{
	RE++;
	return RE;
};

inline bool operator> (complex A, complex B)
{
	int AA = A.IM + A.RE;
	int BB = B.RE + B.IM;

	if (AA > BB)
		return true;
	else
		return false;
}

inline bool operator== (complex A, complex B)
{

	if (A.RE == B.RE and B.RE == B.IM)
		return true;
	else
		return false;
}

inline bool operator!= (complex A, complex B)
{

	if (A.RE != B.RE and B.RE != B.IM)
		return true;
	else
		return false;
}

inline complex operator+ (complex B, complex A)
{
	B.RE = B.RE + A.RE;
	B.IM = B.IM + A.IM;

	return B;
}

inline complex operator- (complex B, complex A)
{
	B.RE = B.RE - A.RE;
	B.IM = B.IM - A.IM;

	return B;
}



inline complex& complex::operator= (const complex& A)
{
	RE = A.RE;
	IM = A.IM;
	cout <<" przymuje  " << RE<<"   "<< IM << endl;
	return *this;
}
