#include "Triangle.h"

Triangle::Triangle(double valuea, double valueb, double valuec)
{
    if (valuea != 0 && valueb != 0 && valuec != 0 && valuea > 0 && valueb > 0 && valuec > 0)
    {
        _a = valuea;
        _b = valueb;
        _c = valuec;
    }
}
void Triangle::set_a(double valuea)
{
    if (valuea != 0 & valuea > 0)
    {
        _a = valuea;
    }
}void Triangle::set_b(double valueb)
{
    if (valueb != 0 & valueb > 0)
    {
        _b = valueb;
    }
}
void Triangle::set_c(double valuec)
{
    if (valuec != 0 & valuec > 0)
    {
        _c = valuec;
    }
}
string Triangle::mod_of_triangle()
{
    if (_a==_c & _a==_b)
    {
        return "равносторонний";
    }
    if (_a!=_b & _b!=_c &_a !=_c)
    {
        return "прямоугольный";
    }
    else
    {
        return "равнобедренный";
    }
}