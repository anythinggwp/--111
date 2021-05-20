#pragma once
#include "Triad.h"
#include <cmath>
using namespace std;
class Triangle : public Triad
{
private:
public:
	Triangle(const double a, const double b, const double c);
	double get_square()
	{
		return sqrt((sum() / 2) * ((sum() / 2) - get_num1()) * ((sum()) / 2 - get_num2()) * ((sum() / 2) - get_num3()));
	}
	Triangle(Triangle &other ) : Triad (other)
	{}
	~Triangle() = default;
	bool proportion(const double a, const double b, const double c);

};