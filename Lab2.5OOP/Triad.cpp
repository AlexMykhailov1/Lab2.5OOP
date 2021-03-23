// Triad.cpp

#include "Triad.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
Triad::Triad()
	:x(0), y(0), z(0)
{}

Triad::Triad(int i1)
	:x(i1),y(0),z(0)
{}

Triad::Triad(int i1, int i2)
	: x(i1), y(i2), z(0)
{}

Triad::Triad(int i1, int i2, int i3)
	: x(i1), y(i2), z(i3)
{}

Triad::Triad(const Triad& T)
	: x(T.x), y(T.y), z(T.z)
{}

Triad& Triad::operator = (const Triad& T) {
	this->x = T.x;
	this->y = T.y;
	this->z = T.z;

	return *this;
}

Triad::operator string() const {
	stringstream sout;
	sout << " ( " << x << " ; " << y << " ; " << z << " )" << endl;
	return sout.str();
}

ostream& operator << (ostream& out, const Triad& T)
{
	out << string(T);
	return out;
}

istream& operator >> (istream& in, Triad& T) {
	int x, y, z;
	cout << endl;
	cout << " Enter x: "; in >> x;
	cout << " Enter y: "; in >> y;
	cout << " Enter z: "; in >> z;
	cout << endl;
	T.SetX(x);
	T.SetY(y);
	T.SetZ(z);

	return in;
}

Triad& Triad::operator ++ ()
{
	++x;
	++y;
	++z;
	return *this;
}

Triad& Triad::operator -- ()
{
	--x;
	--y;
	--z;
	return *this;
}

Triad Triad::operator ++ (int)
{
	Triad t(*this);
	x++;
	y++;
	z++;
	return t;
}

Triad Triad::operator -- (int)
{
	Triad t(*this);
	x--;
	y--;
	z--;
	return t;
}

Triad::~Triad(void)
{}

void Triad::AddNum() {
	int a;
	cout << endl << " Enter number to add: "; cin >> a;

	this->x += a;
	this->y += a;
	this->z += a;
}

void Triad::MultiplyNum() {
	int m;
	cout << endl << " Enter number to multiply: "; cin >> m;

	this->x *= m;
	this->y *= m;
	this->z *= m;
}

bool AreEqual(Triad T1, Triad T2) {
	if (T1.x == T2.x && T1.y == T2.y && T1.z == T2.z)
		return true;
	else
		return false;
}
