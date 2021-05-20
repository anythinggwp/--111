#include "Triangle.h"
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	Triangle one(6, 3, 3);
	Triangle second(3, 3, 4);
	Triangle second1(second);
	one.set_a(-7);
	one.set_b(-7);
	one.set_c(-7);
	cout << one.get_a() << endl;
	cout << one.get_b() << endl;
	cout << one.get_c() << endl;
	cout << one.mod_triangle() << endl;
	cout << one.get_perimetr() << endl;
	cout << one.get_square() << endl;
	cout << one.get_ha() << endl;
	cout << one.get_hb() << endl;
	cout << one.get_hc() << endl;
	second.set_a(0);
	second.set_b(0);
	second.set_c(0);
	cout << second.get_a() << endl;
	cout << second.get_b() << endl;
	cout << second.get_c() << endl;
	cout << second.mod_triangle() << endl;
	cout << second.get_perimetr() << endl;
	cout << second.get_square() << endl;
	cout << second.get_ha() << endl;
	cout << second.get_hb() << endl;
	cout << second.get_hc() << endl;
	cout << second1.get_a() << endl;
	cout << second1.get_b() << endl;
	cout << second1.get_c() << endl;
	cout << second1.mod_triangle() << endl;
	cout << second1.get_perimetr() << endl;
	cout << second1.get_square() << endl;
	cout << second1.get_ha() << endl;
	cout << second1.get_hb() << endl;
	cout << second1.get_hc() << endl;
}