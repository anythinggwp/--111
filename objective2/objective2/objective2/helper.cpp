#include "Triangle.h"
using namespace std;
bool Triangle::proportion(const double value_a, const double value_b, const double value_c)
{
	if (value_a < (value_b + value_c))
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