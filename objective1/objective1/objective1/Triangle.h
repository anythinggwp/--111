#pragma once
#include <iostream>
#include <string>
using namespace std;
//Класс Triangle
class Triangle
{
private:
    //Стороны треугольника а,b,с
    double a;
    double b;
    double c;
public:
    //Конструктор по умолчанию
    Triangle()
    {

    }
    //Конструктор принимающий сразу все значения сторон треугольника(кроме нуля)
    Triangle(double valuea,double valueb,double valuec)
    {
        if (valuea != 0 & valueb != 0 & valuec != 0)
        {
            a = abs(valuea);
            b = abs(valueb);
            c = abs(valuec);
        }
        else
        {
            return;
        }
    }
    // Диструктор класса Triangle
    ~Triangle()
    {

    }
    //Геттер стороны а
    //возвращает а
    double get_a()
    {
        return a;
    }
    //Сеттер стороны а
    //Принимает значение стороны a
    void set_a(double valuea)
    {
        a = valuea;
    }
    //Геттер стороны b
    //возвращает b
    double get_b()
    {
        return b;
    }
    //Сеттер стороны b
    //Принимает значение стороны b
    void set_b(double valueb)
    {
        b = valueb;
    }
    //Геттер стороны c
    //возвращает с
    double get_c()
    {
        return c;
    }
    //Сеттер стороны c
    //Принимает значение стороны c
    void set_c(double valuec)
    {
        c = valuec;
    }
    //Геттер периметра
    //возвращает периметр
    double get_perimetr()
    {
        return a + b + c;
    }
    //Геттер площади
    //возвращает площадь
    double get_square()
    {
        return sqrt((get_perimetr() / 2) * ((get_perimetr() / 2) - a) * ((get_perimetr()) / 2 - b) * ((get_perimetr() / 2) - c));
    }
    //возвращаем строку с типом треугольника
    string what_is_it_triangle()
    {
        if (a == c & a == b)
        {
            return "равносторонний";
        }
        if (a != b & b != c & a != c)
        {
            return "прямоугольный";
        }
        else
        {
            return "равнобедренный";
        }
    }
    //Геттер высоты стороны а
    //возвращает высоту a
    double get_ha()
    {
        return 2 * get_square() / a;
    }
    //Геттеры высоты стороны b
    //возвращает высоту b
    double get_hb()
    {
        return 2 * get_square() / b;
    }
    //Геттер высоты стороны c
    //возвращает высоту c
    double get_hc()
    {
        return 2 * get_square() / c;
    }

};