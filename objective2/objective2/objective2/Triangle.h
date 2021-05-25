#pragma once
#include "Triad.h"
#include <cmath>
using namespace std;
class Triangle : public Triad
{
private:
public:
	/*
	* \brief ����������� ������ Triangle
	* \param ������� a
	* \param ������� b
	* \param ������� c
	*/
	Triangle(const double a, const double b, const double c);
	double get_square()
	{
		return sqrt((sum() / 2) * ((sum() / 2) - get_num1()) * ((sum()) / 2 - get_num2()) * ((sum() / 2) - get_num3()));
	}
	/*
	* \brief �������������� ���������� ����������� ��� ������ Triangle �� ������ Traid
	*/
	Triangle(Triangle &other ) : Triad (other)
	{}
	/*
	* \brief ���������� ������
	*/
	~Triangle() = default;
	/*
	* \brief ������� ���������� ����� �����
	*/
	double angle_a();
	/*
	* \brief ������� ���������� ����� �����
	*/
	double angle_b();
	/*
	* \brief ������� ���������� ����� �����
	*/
	double angle_y();
	/*
	* \brief �������� ������������ �� �������������
	*/
	bool proportion(const double a, const double b, const double c);

};