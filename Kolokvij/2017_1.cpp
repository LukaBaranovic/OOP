// ZADATAK:
//
//
// Preradite funkciju kvadrat tako da rezultat kvadriranja argumenta vraća pomoću reference. 
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...

#include <iostream>
using namespace std;


void kvadrat(double &argument) {
	argument = argument * argument;
}

int main() {
	double x;

	cin >> x;
	kvadrat(x);


	cout << x << endl;

	return 0;
}
