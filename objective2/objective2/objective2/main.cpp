#include <iostream>
#include "Triangle.h"
#include <iomanip>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	Triangle one(3, 4, 5);
	one.set_num1(27);
	cout << one.get_num1()<< "\n";
	cout << one.get_num2()<< "\n";
	cout << one.get_num3()<< "\n";
	cout << one.get_square() << "\n";
	cout << one.angle_a() << "\n";
	cout << one.angle_b() << "\n";
	cout << one.angle_y() << "\n";
	cout << one << "\n";
	Triangle second(one);
	cout << second<<"\n";
	Triad ky(2, 1, 3);
	ky.set_num1(3);
	cout << ky;
}