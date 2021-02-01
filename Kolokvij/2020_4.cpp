// ZADATAK:
//
//
// Napisite genericku funkciju Vece() koja neka 
// prima listu elemenata i prag. Funkcija treba iz liste
// izbaciti sve elemente manje od praga.
// U main funkciji napravite primjer koristenja
// funkcije Vece() na listi varijabli tipa int.
// Elementi liste i prag su proizvoljni.
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte nista iznad ove linije!

// ukljucite potrebne biblioteke...

#include <iostream>
#include <list>
using namespace std;

template <class T> void Vece(list<T>& L, T prag) {
	list<T> ret;
	for (auto it : L) {
		if (it >= prag)
			ret.push_back(it);
	}
	return ret;
}

int main() {
	list<double> lst = {10, 3.2, 5.4, 7.0};
	list<double> r;

	r = Vece(lst, 4.0);


	return 0;
}

 
