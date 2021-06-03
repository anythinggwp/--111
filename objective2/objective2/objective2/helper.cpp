#include "Triangle.h"
bool Triangle::proportion(const double a, const double b, const double c)
{
	return a < (b + c) && b < (a + c) && c < (a + b);
}