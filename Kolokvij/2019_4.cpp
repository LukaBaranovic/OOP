// ZADATAK:
//
//
// Napišite generičku funkciju za zamijenu vrijednosti imena swap. 
// Funkcija neka bude napisana u obliku predloška, tako da se može 
// specijalizirati za razne tipove varijabli. 
// Funkcija neka prima dva argumenta putem reference čije vrijednosti 
// međusobno mijenja. 
// U main funkciji upotrebite funkciju swap dva puta, jedan put za 
// varijable tipa double, drug put za int.
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...

#include <iostream>
using namespace std;

template <class T> void zamijeni(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}


int main() {
	// dodajte naredbe glavne funkcije...
	char a = 'a';
	char b = 'b';

	cout << "a: " << a << endl << "b: " << b << endl;

	zamijeni (a, b);

	cout << "a: " << a << endl << "b: " << b << endl;

	double A = 2.0;
	double B = 3.0;

	cout << "A: " << A << endl << "B: " << B << endl;

	zamijeni(A, B);

	cout << "A: " << A << endl << "B: " << B << endl;


	return 0;
}

