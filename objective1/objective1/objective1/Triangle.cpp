#include "Triangle.h"

Triangle::Triangle(const double value_a,const double value_b, const double value_c)
{
    if (!proportion(value_a, value_b, value_c)) throw ("Треугольник не существует");
        Triangle::set_a(value_a);
        Triangle::set_b(value_b);
        Triangle::set_c(value_c);
}
void Triangle::set_a(const double value_a)
{
    if (!value_a != 0 && value_a > 0) throw ("Треугольник не существует");
        this->_a = value_a;
}
void Triangle::set_b(const double value_b)
{
    if (!value_b != 0 && value_b > 0) throw ("Треугольник не существует");
        this->_b = value_b;
}
void Triangle::set_c(const double value_c)
{
    if (!value_c != 0 && value_c > 0) throw ("Треугольник не существует");
        this->_c = value_c;
}
string Triangle::mod_triangle()
{
    if ((double_compare(_a,_b)) && (double_compare(_a,_c)))
    {
        return "равносторонний";
    }
    if (double_compare(_a, _b)==0 && double_compare(_a, _c) == 0 && double_compare(_b, _c) == 0)
    {
        return "прямоугольный";
    }
    else
    {
        return "равнобедренный";
    }
}