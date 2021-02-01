#include <iostream>
#include <fstream>

using namespace std;


// ZADATAK:
//
//
// Tekstualna datoteka "ulaz.num" sadrži cijele brojeve. Napisite program 
// kojim se citaju svi brojevi iz ulazne datoteke, te se u drugu tekstualnu
// datoteku imena "poz.num" ispisuju svi pozitivni brojevi iz prve datoteke.
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// ukljucite potrebne biblioteke...

int main() {
	ifstream ifs("ulaz.num");
	
	ofstream ofs("pozi.num");

	double d;

	while (ifs >> d) {
		if (d > 0)
			ofs << d << endl;
	}

	ofs.close();
	ifs.close();

	return 0;
}
