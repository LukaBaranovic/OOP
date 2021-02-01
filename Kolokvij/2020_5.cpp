// ZADATAK:
//
//
// Napisite funkciju FindInt() kojom se pretrazuje lista integera.
// Funkcija treba u listi L pronaci integer i.
// Ukoliko ga pronadje neka vrati istinu, inace laz.
// Trazenje napravite funkcijom find() iz biblioteke <algorithm>.
// Napisite main() funkciju sa primjerom koristenja funkcije 
// FindInt().
//
// NAPOMENA: STL funkcija find() vraca iterator end() ukoliko
// je potraga neuspjesna.
// 
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte nista iznad ove linije!

// ukljucite potrebne biblioteke...

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
 

bool FindInt(const list<int>& L, int i) {
	if (find(L.begin(), L.end(), i) == L.end())
		return false;
	else
		return true;
}

int main() {
	list<int> L = { 1,2,3,4,5,6,7 };
	cout << FindInt(L, 5) << endl;

	return 0;
}
