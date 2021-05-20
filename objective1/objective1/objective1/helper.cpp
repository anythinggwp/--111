#include <cmath>
#include <string>
#include "Triangle.h"
bool Triangle::double_compare(const double value_a,const double value_b,const double eps) 
{
	if (abs(value_a - value_b) < eps) 
	{
		return true;
	}
	return false;
}
bool Triangle::proportion(const double value_a,const double value_b,const double value_c)
{
	if (value_a<(value_b+value_c))
	{
		if (value_a > (value_b - value_c))
		{
			if (value_b < (value_a + value_c))
			{
				if (value_b > (value_a - value_c))
				{
					if (value_c < (value_a + value_b))
					{
						if (value_c > (value_a - value_b))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}
