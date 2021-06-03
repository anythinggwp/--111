#include "Triangle.h"
Triangle::Triangle(const double a, const double b, const double c)
{
	if (!proportion(a,b,c)) throw ("Треугольник не существует");
		::Triad::set_num1(a);
		::Triad::set_num2(b);
		::Triad::set_num3(c);
}
void Triangle::set_num1(const double num)
{
	if (!proportion(num, get_num2(), get_num3())) throw ("Треугольник не существует"); 
	{
		::Triad::set_num1(num);
	}
}
void Triangle::set_num2(const double num)
{
	if (!proportion(get_num1(), num, get_num3())) throw ("Треугольник не существует");
	{
		::Triad::set_num2(num);
	}
}
void Triangle::set_num3(const double num)
{
	if (!proportion(get_num1(), get_num2(), num)) throw ("Треугольник не существует");
	{
		::Triad::set_num3(num);
	}
}
double Triangle::angle_a() const
{
	double rad = (pow(get_num1(),2) + pow(get_num3(),2) - pow(get_num2(),2)) / (2 * get_num1() * get_num3());
	if (rad == 0)
	{
		return 90;
	}
	else
	{
		return (rad * sum_angle) / pi;
	}
}
double Triangle::angle_b() const
{
	double rad = ((pow(get_num1(),2) + pow(get_num2(),2)) - pow(get_num3(),2)) / (2 * get_num1() * get_num2());
	if (rad == 0)
	{
		return 90;
	}
	else
	{
		return (rad * sum_angle) / pi;
	}
}
double Triangle::angle_y() const{ return sum_angle - (angle_a() + angle_b()); }
double Triangle::get_square() const 
{ 
	return sqrt((sum() / 2) * ((sum() / 2) - get_num1()) * ((sum()) / 2 - get_num2()) * ((sum() / 2) - get_num3())); 
}
ostream& operator<<(ostream& os, const Triangle& obj)
{
	return os << "Стороны треугольника: " << "a(" << obj.get_num1() << "),b(" << obj.get_num2() << "),c(" << obj.get_num3() << ")"
		<< "; Площадь = " << obj.get_square() << "; Углы: alpha(" << obj.angle_a() << "),betta(" << obj.angle_b() << "), gamma(" << obj.angle_y() << ");";
}