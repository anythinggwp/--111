#include <iostream>
#include <cmath>
#include "Triangle.h"
using namespace std;
void main()
{
	Triangle one(3, 4, 5);
	cout << one.get_num1()<<endl;
	cout << one.get_num2()<<endl;
	cout << one.get_num3()<<endl;
	cout << one.get_square() << endl;
	Triangle second(one);
	cout << second.get_num1() << endl;
	cout << second.get_num2() << endl;
	cout << second.get_num3() << endl;
	cout << second.get_square() << endl;
	Triad first(3, 4, 5);
	cout << first.get_num1() << endl;
	cout << first.angle_a() << endl;

}