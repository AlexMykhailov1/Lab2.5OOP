// Vector3D.h

#pragma once
#include "Triad.h"

class Vector3D
{
private:
	Triad triad;
public:
	void SetTriad(Triad value) { this->triad = value; };
	Triad GetTriad() const { return triad; };

	Vector3D();
	Vector3D(int);
	Vector3D(int, int);
	Vector3D(int, int, int);

	Vector3D(const Vector3D& s);
	Vector3D& operator = (const Vector3D& s);

	friend ostream& operator << (ostream& out, const Vector3D& s);
	friend istream& operator >> (istream& in, Vector3D& s);

	operator string () const;

	Vector3D& operator ++ ();
	Vector3D& operator -- ();
	Vector3D operator ++ (int);
	Vector3D operator -- (int);

	~Vector3D();

	friend Vector3D AddVector(Vector3D, Vector3D);
	friend int ScalarVector(Vector3D, Vector3D);
};
