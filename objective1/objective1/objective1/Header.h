#pragma once
#include <iostream>
using namespace std;
//����� Triangle
class Triangle
{
private:
    //������� ������������ �,b,�
    double a;
    double b;
    double c;
    //��������
    double p;
    //�������
    double s;
    //������ ������ a,b,c
    double ha;
    double hb;
    double hc;
public:
    //����������� �� ���������
    Triangle();
    //������ ������� �
    //���������� �
    double Geta()
    {
        return a;
    }
    //������ ������� �
    //��������� �������� ������� a
    void Seta(float valuea)
    {
        a = valuea;
    }
    //������ ������� b
    //���������� b
    double Getb()
    {
        return b;
    }
    //������ ������� b
    //��������� �������� ������� b
    void Setb(float valueb)
    {
        b = valueb;
    }
    //������ ������� c
    //���������� �
    double Getc()
    {
        return c;
    }
    //������ ������� c
    //��������� �������� ������� c
    void Setc(float valuec)
    {
        c = valuec;
    }
    //������ ���������
    //���������� ��������
    double Getp()
    {
        p = a + b + c;
        return p;
    }
    //������ �������
    //���������� �������
    double Gets()
    {
        float s1 = Getp() / 2;
        s = sqrt(s1 * (s1 - a) * (s1 - b) * (s1 - c));
        return s;
    }
    //���������� ��� ������������
    void WhatIsItTriangle()
    {
        if (a == c & a == b)
        {
            cout << "��� ������������ ��������������" << endl;
        }
        if (a != b & b != c & a != c)
        {
            cout << "��� ������������ �������������" << endl;
        }
        else
        {
            cout << "��� ������������ ��������������" << endl;
        }
    }
    //������ ������ ������� �
    //���������� ������ a
    double Getha()
    {
        ha = 2 * Gets() / a;
        return ha;
    }
    //������� ������ ������� b
    //���������� ������ b
    double Gethb()
    {
        hb = 2 * Gets() / b;
        return hb;
    }
    //������ ������ ������� c
    //���������� ������ c
    double Gethc()
    {
        hc = 2 * Gets() / c;
        return hc;
    }

};