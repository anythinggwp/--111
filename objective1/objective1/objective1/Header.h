#pragma once
#include <iostream>
using namespace std;
//Класс Triangle
class Triangle
{
private:
    //Стороны треугольника а,b,с
    double a;
    double b;
    double c;
    //Периметр
    double p;
    //Площадь
    double s;
    //Высоты сторон a,b,c
    double ha;
    double hb;
    double hc;
public:
    //Конструктор по умолчанию
    Triangle();
    //Геттер стороны а
    //возвращает а
    double Geta()
    {
        return a;
    }
    //Сеттер стороны а
    //Принимает значение стороны a
    void Seta(float valuea)
    {
        a = valuea;
    }
    //Геттер стороны b
    //возвращает b
    double Getb()
    {
        return b;
    }
    //Сеттер стороны b
    //Принимает значение стороны b
    void Setb(float valueb)
    {
        b = valueb;
    }
    //Геттер стороны c
    //возвращает с
    double Getc()
    {
        return c;
    }
    //Сеттер стороны c
    //Принимает значение стороны c
    void Setc(float valuec)
    {
        c = valuec;
    }
    //Геттер периметра
    //возвращает периметр
    double Getp()
    {
        p = a + b + c;
        return p;
    }
    //Геттер площади
    //возвращает площадь
    double Gets()
    {
        float s1 = Getp() / 2;
        s = sqrt(s1 * (s1 - a) * (s1 - b) * (s1 - c));
        return s;
    }
    //определеят тип треугольника
    void WhatIsItTriangle()
    {
        if (a == c & a == b)
        {
            cout << "Вид треугольника ровносторонний" << endl;
        }
        if (a != b & b != c & a != c)
        {
            cout << "Вид треугольника прямоугольный" << endl;
        }
        else
        {
            cout << "Вид треугольника равнобедренный" << endl;
        }
    }
    //Геттер высоты стороны а
    //возвращает высоту a
    double Getha()
    {
        ha = 2 * Gets() / a;
        return ha;
    }
    //Геттеры высоты стороны b
    //возвращает высоту b
    double Gethb()
    {
        hb = 2 * Gets() / b;
        return hb;
    }
    //Геттер высоты стороны c
    //возвращает высоту c
    double Gethc()
    {
        hc = 2 * Gets() / c;
        return hc;
    }

};