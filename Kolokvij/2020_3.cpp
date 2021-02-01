#include <iostream>
using namespace std; 
// ZADATAK:
//
// Deklarirana je klasa Point2D kojom se opisuje polozaj tocke 
// u 2D prostoru (x,y). Koristeci klasu i pravila nasljedjivanja 
// definirajte klasu Point4D, pomocu koje se opisuje polozaj 
// tocke u trodimenzionalnom prostoru sa vremenom (x, y, z, t).
// Vrijeme ne smije biti negativan broj.
// Dodatne varijable neka budu tipa double.
// Definirajte:
//  a)	konstruktor, kojim se dodatne varijable inicijaliziraju na nulu
//  b)	operator !=
//  c)	operator >>
// U main funkciji napišite primjer korištenja klase Point4D.
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte nista iznad ove linije!

// ukljucite potrebne biblioteke...

class Point2D {
public:
	Point2D() { m_x = m_y = 0.0; }
	double m_x, m_y;
};

class Point4D : public Point2D {
	double t;
public:
	double z;
	double getT() { return t; };
	void setT(double temp) { if (temp >= 0) t = temp; };
	Point4D() { t = z = 0.0; };
};
bool operator!=(Point4D& left, Point4D& right) {
	if (left.m_x != right.m_x)
		return true;
	if (left.m_y != right.m_y)
		return true;
	if (left.z != right.z)
		return true;
	if (left.getT() != right.getT())
		return true;
	return false;
}

istream& operator>>(istream& istr, Point4D& me) {
	double a, b, c, d;
	if (istr >> a >> b >> c >> d) {
		me.m_x = a;
		me.m_y = b;
		me.z = c;
		me.setT(d);
	}
	return istr;
}

int main() {


}
