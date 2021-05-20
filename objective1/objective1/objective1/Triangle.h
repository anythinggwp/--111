#pragma once
#include <iostream>
#include <string>
using namespace std;
/**
*\brief����� Triangle
*/
class Triangle
{
private:
    /*
    * \brief ����� ����������� ������� ������������
    * \param ������� a
    * \param ������� b
    * \param ������� �
    */
    double _a;
    double _b;
    double _c;
public:
    /*
    * \brief ��������� ����������� ������ Triangle ����������� �������� ������
    * \param �������� ������: �,b,c
    */
    Triangle(const double valuea,const double valueb,const double valuec);
    /*
    * \brief ����������� ����������� ������ Triangle
    */
    Triangle(const Triangle &other)
    {
        this->_a = other._a;
        this->_b = other._b;
        this->_c = other._c;
    }
    /*
    *\brief ���������� ������ Triangle
    */
    ~Triangle() = default;
    /*
    * \brief ������ ������� a
    * \param ���������� ������� a
    */
    double get_a()
    {
        return _a;
    }
    /*
    * \brief ������ ������� a
    * \param �������� �������� ������� a (��������� �������� ������������� ������ ����)
    */
    void set_a(const double valuea);
    /*
     * \brief ������ ������� b
     * \param ���������� ������� b
     */
    double get_b()
    {
        return _b;
    }
    /*
    * \brief ������ ������� b
    * \param �������� �������� ������� b (��������� �������� ������������� ������ ����)
    */
    void set_b(const double valueb);
    /*
     * \brief ������ ������� c
     * \param ���������� ������� c
     */
    double get_c()
    {
        return _c;
    }
    /*
    * \brief ������ ������� c
    * \param �������� �������� ������� c (��������� �������� ������������� ������ ����)
    */
    void set_c(const double valuec);
    /*
     * \brief ������ ��������� ������������
     * \param ��������� � ���������� ��������
     */
    double get_perimetr()
    {
        return _a + _b + _c;
    }
    /*
     * \brief ������ ������� ������������
     * \param ��������� � ���������� �������
     */
    double get_square()
    {
        return sqrt((get_perimetr() / 2) * ((get_perimetr() / 2) - _a) * ((get_perimetr()) / 2 - _b) * ((get_perimetr() / 2) - _c));
    }
     /*
     * \brief ������� ������������ ��� ������������ (�������������,��������������,��������������)
     * \param ��������� ������������
     */
    string mod_triangle();
     /*
     * \brief ������ ������ ������������ �� ������� a
     * \param ��������� � ���������� ������ ������������ �� ������� �
     */
    double get_ha()
    {
        return 2 * get_square() / _a;
    }
    /*
    * \brief ������ ������ ������������ �� ������� b
    * \param ��������� � ���������� ������ ������������ �� ������� b
    */
    double get_hb()
    {
        return 2 * get_square() /_b;
    }
    /*
    * \brief ������ ������ ������������ �� ������� c
    * \param ��������� � ���������� ������ ������������ �� ������� c
    */
    double get_hc()
    {
        return 2 * get_square() / _c;
    }
    /*
    * \brief ������� ������������ ��� ������ double
    * \param �������� ������ �������
    * \param �������� ������ �������
    * \param �������� � ������� ����� ���������� ��� �������
    */
    bool double_compare(double value_a, double value_b, double eps);
    /*
    * \brief ������� ����������� �� ����������� ������������ �������� ����������
    * \param �������� ������� a
    * \param �������� ������� b
    * \param �������� ������� c
    */
    bool proportion(const double value_a,const double value_b,const double value_c);
};