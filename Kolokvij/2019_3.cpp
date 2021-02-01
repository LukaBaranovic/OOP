// ZADATAK:
//
//
// Napisati funkciju, kojom se iz dva vektora cijelih brojeva V1 i V2 
// formira jedan vector V, koja treba sadržavati sve parne brojeve iz vectora V1 i V2.
// U vectoru V brojevi trebaju biti sortirani. Za vector koristite STL biblioteku;
// Za sortiranje koristite funkciju iz STL biblioteke algoritama. 
// U main funkciji sami napravite primjer upotrebe funkcije.
// 
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

vector<int> Formiraj_vector(vector<int>& V1, vector<int>& V2) {
	vector<int> V;
	vector<int>::iterator pos;

	for (pos = V1.begin(); pos != V1.end(); ++pos) {
		if (*pos % 2 == 0)
			V.push_back(*pos);
	}
	for (pos = V2.begin(); pos != V2.end(); ++pos) {
		if (*pos % 2 == 0)
			V.push_back(*pos);
	}
	sort(V.begin(), V.end());

	return V;
}

int main() {
	vector<int> V1 = { 1,4,6,7,9 };
	vector<int> V2  = { 12,53,87,23,6 };

	sort(V1.begin(), V1.end());
	sort(V2.begin(), V2.end());
	
	vector<int> V = Formiraj_vector(V1, V2);

	vector<int>::iterator pos;

	for (pos = V.begin(); pos != V.end(); ++pos) {
		cout << *pos << endl;
	}


}
