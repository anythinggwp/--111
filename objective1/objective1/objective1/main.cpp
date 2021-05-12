#include "Triangle.h"
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	Triangle one(6, 6, 6);
	Triangle second;
	one.set_a(5);
	one.set_b(5);
	one.set_c(5);
	cout << one.get_a() <<endl;
	cout << one.get_b() << endl;
	cout << one.get_c() << endl;
	cout << one.mod_of_triangle() << endl;
	cout << one.get_perimetr() << endl;
	cout << one.get_square() << endl;
	cout << one.get_ha() << endl;
	cout << one.get_hb() << endl;
	cout << one.get_hc() << endl;
	second.set_a(6);
	second.set_b(5);
	second.set_c(4);
	cout << second.get_a() << endl;
	cout << second.get_b() << endl;
	cout << second.get_c() << endl;
	cout << second.mod_of_triangle() << endl;
	cout << second.get_perimetr() << endl;
	cout << second.get_square() << endl;
	cout << second.get_ha() << endl;
	cout << second.get_hb() << endl;
	cout << second.get_hc() << endl;

}
