#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std; 

enum class priorytet { brak, niski, sredni, wysoki, bardzo_wysoki, obowiazkowy, nie_nadano };

class Autor {
public:
	string imie;
	string nazwisko;

	Autor(string,string);			
	Autor();

	void wyswietlAutora();
	~Autor();
	bool operator==(Autor);
};

class Gatunek{
public:
	string nazwaGatunku;
	void wyswietlGatunek();
	//void dodajGatunek();
	Gatunek(string);				//+
	Gatunek();
	~Gatunek();
	bool operator==(Gatunek);
};

class Wydawnictwo
{
public:
	string nazwaWydawnictwa;
	void wyswietlWydawnictwo();
	//void dodajWydawnictwo();
	Wydawnictwo(string);			//+
	Wydawnictwo();
	~Wydawnictwo();
	bool operator==(Wydawnictwo);
};

class Data {
public:
	int rok, miesiac;
	void wyswietlDate();
	//void dodajDate();
	Data(int, int);					//+
	Data();
	~Data();
	bool operator==(Data);
};

 class Pismo {				
 public:
	char ID;
	Autor autor_pozycji;
	string tytul;
	Gatunek gatunek;
	Wydawnictwo wydawnictwo;
	Data data_wydania;
	priorytet prior;
	string inne_uwagi;
	double moja_ocena;
	Pismo * next = nullptr;		

	
	virtual void WyswietlPismo() =0;
	virtual ostream& zapiszPismoDoPliku(ostream&)=0;

	Pismo();
	Pismo(char, string,string, string, string, string, int,int, priorytet, string, double);
	~Pismo();
};

class Ksiazka: public Pismo
{
public:
	Gatunek podgatunek;
	Data Data_napisania;


	 void DodajPismo();
	 void WyswietlPismo();
	// void WyczyscKryteria();

	 Ksiazka(char, string, string, string, string, string, string, int, int, int, int, priorytet, string, double);
	 Ksiazka();
	 ~Ksiazka();

	ostream& zapiszPismoDoPliku(ostream&);
	//void WczytajKsiazke(istream&);
	
	bool operator==(Ksiazka);

	friend ostream& operator<< (ostream &, const Ksiazka & );
	friend istream& operator>> (istream &,  Ksiazka &);
};

class Komiks : public Pismo
{
public:
	Autor grafik;
	Gatunek podgatunek;

	 void DodajPismo();
	 void WyswietlPismo();
	 ostream& zapiszPismoDoPliku(ostream&);
	// void WyczyscKryteria();
	
	 Komiks(char, string, string, string, string, string, string, string, string, int, int, priorytet, string, double);
	 Komiks();
	 ~Komiks();

	 bool operator==(Komiks);
	 friend ostream& operator<< (ostream &, const Komiks &);
	 friend istream& operator>> (istream &, Komiks &);
};

class Czasopismo: public Pismo
{
public:
	string seria;
	string rodzaj_czasopisma;

	void DodajPismo();
	void WyswietlPismo();
	//void WyczyscKryteria();

	bool operator==(Czasopismo);
	ostream& zapiszPismoDoPliku(ostream&);
	Czasopismo(char, string, string, string, string, string, string, string, int, int, priorytet, string, double);
	Czasopismo();
	~Czasopismo();
	friend ostream& operator<< (ostream &, const Czasopismo &);
	friend istream& operator>> (istream &, Czasopismo &);
};

class Lista
{
public:
	Pismo * head = nullptr;

	void zapiszDoListy(Pismo *P1);
	void wypiszListe();
	void zapiszListeDoPliku(string);
	void FiltrujListe();
};

class MenuListy
{
public:

	string nazwa_pliku;

	void DzialanieProgramu();
	void WyborDzialania(Lista&,string);
	MenuListy();
};


Lista WczytajListeZPliku(Lista &L1, string nazwa_pliku);
