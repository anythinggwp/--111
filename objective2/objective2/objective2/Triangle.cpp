#include "Triangle.h"
using namespace std;
Triangle::Triangle(const double a, const double b, const double c)
{
	if (proportion(a, b, c) == 1)
	{
		Triangle::set_num1(a);
		Triangle::set_num2(b);
		Triangle::set_num3(c);
	}
}
double Triangle::angle_a()
{
	double a = get_num1();
	double b = get_num2();
	double c = get_num3();
	double temp = pow(a, 2);
	double temp2 = pow(b, 2);
	double temp3 = pow(c, 2);
	double rad = ((temp2 + temp3) - temp) / (2 * b * c);
	if (rad == 0)
	{
		return 90;
	}
	else
	{
		return (rad * 180) / 3.14;
	}
}
double Triangle::angle_b()
{
	double a = get_num1();
	double b = get_num2();
	double c = get_num3();
	double temp = a * a;
	double temp2 = b * b;
	double temp3 = c * c;
	double rad = ((temp + temp3) - temp2) / (2 * a * c);
	if (rad == 0)
	{
		return 90;
	}
	else
	{
		return (rad * 180) / 3.14;
	}
}
double Triangle::angle_y()
{
	double a = get_num1();
	double b = get_num2();
	double c = get_num3();
	double temp = a * a;
	double temp2 = b * b;
	double temp3 = c * c;
	double rad = ((temp + temp2) - temp3) / (2 * b * a);
	if (rad == 0)
	{
		return 90;
	}
	else
	{
		return (rad * 180) / 3.14;
	}
}