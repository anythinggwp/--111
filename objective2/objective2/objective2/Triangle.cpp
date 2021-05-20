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