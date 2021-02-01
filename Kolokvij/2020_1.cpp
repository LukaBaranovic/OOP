#include <iostream>
using namespace std;



// ZADATAK:
//
//
// Deklarirana je klasa Razlomak, kojom se definira objekt razlomka odredjen cjelobrojnim 
// brojnikom i nazivnikom. Napisite:
// - operator = 
// - operator > 
// - operator za citanje, koji neka sa ulaznog toka cita brojnik i nazivnik
// Napisite primjer funkcije main() u kojem cete upotrijebiti klasu Razlomak i njene operatore.
// U funkciji main() objekte klase Razlomak alocirajte/dealocirajte dinamicki.
//
// NAPOMENA : Nazivnik ne smije biti nula!
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte nista iznad ove linije!

// ukljucite potrebne biblioteke...


class Razlomak {
	int m_nazivnik;
public:
	int m_brojnik;
	Razlomak() { m_brojnik = 0; m_nazivnik = 1; }
	int GetNazivnik() { return m_nazivnik; }
	void SetNazivnik(int naz) { m_nazivnik = (naz != 0 ? naz : m_nazivnik); }
	Razlomak& operator=(Razlomak& other);
};
bool operator>(Razlomak& left, Razlomak& right) {
	double l, r;
	l = left.m_brojnik / left.GetNazivnik();
	r = right.m_brojnik / left.GetNazivnik();

	if (l > r)
		return true;
	else
		return false;
}

Razlomak& Razlomak::operator=(Razlomak &other){
	m_brojnik = other.m_brojnik;
	m_nazivnik = other.m_nazivnik;
	return *this;
}

istream& operator>>(istream& istr, Razlomak& me) {
	int b, n;
	istr >> b >> n ;
	if (istr) {
		me.m_brojnik = b;
		me.SetNazivnik(n);
	}
	return istr;
}

int main() {
	Razlomak* a = new Razlomak;
	Razlomak* b = new Razlomak;

	b->m_brojnik = 3;

	cout << (*b > * a);

	*a = *b;

	delete a;
	delete b;
	return 0;
}
