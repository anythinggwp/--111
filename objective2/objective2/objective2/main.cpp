#include <iostream>
#include <cmath>
#include "Triangle.h"
#include <iomanip>
using namespace std;
void main()
{
	Triangle one(3, 4, 5);
	cout << one.get_num1()<<endl;
	cout << one.get_num2()<<endl;
	cout << one.get_num3()<<endl;
	cout << one.get_square() << endl;
	cout << one.angle_a() << endl;
	cout << one.angle_b() << endl;
	cout << one.angle_y() << endl;
	Triangle second(one);
	cout << second.get_num1() << endl;
	cout << second.get_num2() << endl;
	cout << second.get_num3() << endl;
	cout << second.get_square() << endl;
	cout << second.angle_a() << endl;
	cout << second.angle_b() << endl;
	cout << second.angle_y() << endl;
	Triad ky(2, 1, 3);
	cout << ky.get_num1() << endl;
	cout << ky.get_num2() << endl;
	cout << ky.get_num3() << endl;
	cout << ky.sum() << endl;
}