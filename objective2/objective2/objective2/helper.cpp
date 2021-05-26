#include "Triangle.h"
#include <cmath>
#include <iostream>
using namespace std;
bool Triangle::proportion(const double value_a, const double value_b, const double value_c)
{
	return value_a < (value_b + value_c) && value_b < (value_a + value_c) && value_c < (value_a + value_b);
}