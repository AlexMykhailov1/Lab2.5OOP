// Vector3D.cpp

#include "Vector3D.h"
#include <iostream>
#include <string>

using namespace std;

Vector3D::Vector3D()
	:triad(0, 0, 0)
{}

Vector3D::Vector3D(int i1)
	: triad(i1, 0, 0)
{}

Vector3D::Vector3D(int i1, int i2)
	: triad(i1, i2, 0)
{}

Vector3D::Vector3D(int i1, int i2, int i3)
	:triad(i1, i2, i3)
{}

Vector3D::Vector3D(const Vector3D& V) {
	triad = V.triad;
}

Vector3D& Vector3D::operator = (const Vector3D& V) {
	triad = V.triad;
	return *this;
}

Vector3D::operator string() const {
	stringstream sout;
	sout << " Vector = " << string(triad);
	return sout.str();
}

ostream& operator << (ostream& out, const Vector3D&V) {
	out << string(V);
	return out;
}

istream& operator >> (istream& in, Vector3D& V) {
	in >> V.triad;
	return in;
}

Vector3D& Vector3D::operator ++ () {
	++triad;
	return *this;
}

Vector3D& Vector3D::operator -- () {
	--triad;
	return *this;
}

Vector3D Vector3D::operator ++ (int) {
	Vector3D V(*this);
	triad++;
	return V;
}

Vector3D Vector3D::operator -- (int) {
	Vector3D V(*this);
	triad--;

	return V;
}

Vector3D::~Vector3D(void)
{}

Vector3D AddVector(Vector3D V1, Vector3D V2) {
	int x = V1.triad.GetX() + V2.triad.GetX(),
		y = V1.triad.GetY() + V1.triad.GetY(),
		z = V1.triad.GetZ() + V2.triad.GetZ();

	Vector3D V3(x, y, z);

	return V3;
}

int ScalarVector(Vector3D V1, Vector3D V2) {
	return V1.triad.GetX() * V2.triad.GetX() + V1.triad.GetY() * V2.triad.GetY() + V1.triad.GetZ() * V2.triad.GetZ();
}
