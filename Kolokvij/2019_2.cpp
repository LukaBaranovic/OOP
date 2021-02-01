// ZADATAK:
//
//
// Deklarirana je klasa Razlomak, kojom se definira objekt razlomka određen cjelobrojnim brojnikom i nazivnikom:
// Napišite:
// - podrazumijevani konstruktor koji postavlja brojnik na 0, a nazivnik na 1
// - kopirni konstruktor
// - pristupne funkcije za nazivnik
// - postfix operator ++ koji neka poveća brojnik za iznos nazivnika
// - operator za ispisivanje, koji neka ispisuje dva cijela broja - brojnik i nazivnik odjeljena znakom '/'
// Napišite primjer funkcije main u kojem ćete upotrijebiti klasu Razlomak i njene funkcije.
//
// NAPOMENA : Nazivnik ne smije biti nula!
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...

#include <iostream>
using namespace std;


class Razlomak {
	int m_nazivnik;
public:
	int m_brojnik;
	Razlomak();
	int GetNazivnik();
	void SetNazivnik(int naz);
	Razlomak operator++();
};

Razlomak Razlomak::operator++() {
	m_brojnik += m_nazivnik;
	return ;
}

Razlomak::Razlomak() {
	m_nazivnik = 0;
	m_brojnik = 1;
}

int Razlomak::GetNazivnik() {
	return m_nazivnik;
}

void Razlomak::SetNazivnik(int naz) {
	if(naz != 0)
		m_nazivnik = naz;
}



ostream& operator << (ostream& out, Razlomak& s) {
	out << s.m_brojnik << " / " << s.GetNazivnik() << endl;
	return out;
}

int main() {
	int a;

	Razlomak raz;
	cin >> a;

	raz.SetNazivnik(a);

	cout << raz << endl;




	return 0;
}
