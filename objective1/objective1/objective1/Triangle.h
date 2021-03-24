#pragma once
#include <iostream>
#include <string>
using namespace std;
//����� Triangle
class Triangle
{
private:
    //������� ������������ �,b,�
    double a;
    double b;
    double c;
public:
    //����������� �� ���������
    Triangle()
    {

    }
    //����������� ����������� ����� ��� �������� ������ ������������(����� ����)
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
    // ���������� ������ Triangle
    ~Triangle()
    {

    }
    //������ ������� �
    //���������� �
    double get_a()
    {
        return a;
    }
    //������ ������� �
    //��������� �������� ������� a
    void set_a(double valuea)
    {
        a = valuea;
    }
    //������ ������� b
    //���������� b
    double get_b()
    {
        return b;
    }
    //������ ������� b
    //��������� �������� ������� b
    void set_b(double valueb)
    {
        b = valueb;
    }
    //������ ������� c
    //���������� �
    double get_c()
    {
        return c;
    }
    //������ ������� c
    //��������� �������� ������� c
    void set_c(double valuec)
    {
        c = valuec;
    }
    //������ ���������
    //���������� ��������
    double get_perimetr()
    {
        return a + b + c;
    }
    //������ �������
    //���������� �������
    double get_square()
    {
        return sqrt((get_perimetr() / 2) * ((get_perimetr() / 2) - a) * ((get_perimetr()) / 2 - b) * ((get_perimetr() / 2) - c));
    }
    //���������� ������ � ����� ������������
    string what_is_it_triangle()
    {
        if (a == c & a == b)
        {
            return "��������������";
        }
        if (a != b & b != c & a != c)
        {
            return "�������������";
        }
        else
        {
            return "��������������";
        }
    }
    //������ ������ ������� �
    //���������� ������ a
    double get_ha()
    {
        return 2 * get_square() / a;
    }
    //������� ������ ������� b
    //���������� ������ b
    double get_hb()
    {
        return 2 * get_square() / b;
    }
    //������ ������ ������� c
    //���������� ������ c
    double get_hc()
    {
        return 2 * get_square() / c;
    }

};