// Source.cpp
// Композиція класів та об’єктів
// Михайлов Олександр
// Варіант 19

#include <iostream>
#include <string>
#include <sstream>
#include "Vector3D.h"

using namespace std;

int main()
{
	Triad T1;
	Triad T2(1, 2);
	Triad T3(4, 5, 6);

	cout << T1 << T2 << T3;
	
	Triad T4;
	cin >> T4;

	T4.AddNum();
	cout << T4 << endl;

	T4.MultiplyNum();
	cout << T4 << endl;

	if (AreEqual(T3, T4))
		cout << " Coordinates are equal!" << endl;
	else
		cout << " Coordinates are not equal!" << endl;

	cout << endl;

	Vector3D V1;
	Vector3D V2(1,2);
	Vector3D V3(7, 8, 9);

	cout << V1 << V2 << V3;

	Vector3D V4;
	cin >> V4;

	Vector3D V5 = AddVector(V3, V4);
	cout << V5;

	cout << " Scalar product = " << ScalarVector(V5, V4) << endl;

	return 0;
}