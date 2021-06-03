#include <cmath>
#include <iostream>
#include "Ellipse.h"
#include "Parallelepiped.h"
#include "Rhomb.h"

using namespace std;

int main() {

	Rhomb rhomb(2,4);
	cout << rhomb.Perimetr() << endl;
	cout << rhomb.Area() << endl;

	Parallelepiped par(1, 2, 3);
	cout << par.Area() << endl;
	cout << par.Perimetr() << endl;

	Ellipse el(4, 8);
	cout << el.Perimetr() << endl;
	cout << el.Area() << endl;

	

}