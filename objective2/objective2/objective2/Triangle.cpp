#include "Triangle.h"
# define M_PI           3.14159265358979323846  /* pi */
using namespace std;
Triangle::Triangle(const double a, const double b, const double c)
{
	if (!proportion(a,b,c)) throw ("Треугольник не существует");
		Triangle::set_num1(a);
		Triangle::set_num2(b);
		Triangle::set_num3(c);
}
double Triangle::angle_a()
{
	int temp = 180;
	double rad = (pow(get_num1(),2) + pow(get_num3(),2) - pow(get_num2(),2)) / (2 * get_num1() * get_num3());
	if (rad == 0)
	{
		return 90;
	}
	else
	{
		return (rad * 180) / M_PI;
	}
}
double Triangle::angle_b()
{
	int temp = 180;
	double rad = ((pow(get_num1(),2) + pow(get_num2(),2)) - pow(get_num3(),2)) / (2 * get_num1() * get_num2());
	if (rad == 0)
	{
		return 90;
	}
	else
	{
		return (rad * temp) / M_PI;
	}
}
double Triangle::angle_y()
{
	int temp = 180;
	return temp - (angle_a() + angle_b());
}