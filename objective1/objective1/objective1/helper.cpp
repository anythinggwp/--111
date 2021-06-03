#include <cmath>
#include <string>
#include "Triangle.h"
bool Triangle::double_compare(const double value_a,const double value_b) 
{
	return abs(value_a - value_b) <= numeric_limits<double>::min();
}
bool Triangle::proportion(const double value_a,const double value_b,const double value_c)
{
	return value_a < (value_b + value_c) && value_b < (value_a + value_c) && value_c < (value_a + value_b);
}
