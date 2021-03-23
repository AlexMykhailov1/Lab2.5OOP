// Triad.h

#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Triad
{
private:
	int x, y, z;
public:
	int GetX() const { return x; };
	int GetY() const { return y; };
	int GetZ() const { return z; };

	void SetX(int value) { this->x = value; };
	void SetY(int value) { this->y = value; };
	void SetZ(int value) { this->z = value; };

	Triad();
	Triad(int);
	Triad(int, int);
	Triad(int, int, int);
	Triad(const Triad&);

	Triad& operator = (const Triad&);

	operator string() const;

	friend ostream& operator << (ostream& out, const Triad&);
	friend istream& operator >> (istream& in, Triad&);

	Triad& operator ++ ();
	Triad& operator -- ();
	Triad operator ++ (int);
	Triad operator -- (int);

	~Triad();

	void AddNum();
	void MultiplyNum();
	friend bool AreEqual(Triad, Triad);
};