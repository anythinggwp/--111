#pragma once
#include "Triad.h"
#include <cmath>
using namespace std;
class Triangle : public Triad
{
private:
public:
	/*
	* \brief Коснтруктор класса Triangle
	* \param сторона a
	* \param сторона b
	* \param сторона c
	*/
	Triangle(const double a, const double b, const double c);
	/*
	* \brief унаследованный коструктор копирования для класса Triangle от класса Traid
	*/
	Triangle(Triangle &other ) : Triad (other)
	{}
	/*
	* \brief диструктор класса
	*/
	~Triangle() = default;
	/*
	* \brief функция нахождения угола альфа
	*/
	double angle_a();
	/*
	* \brief функция нахождения угола альфа
	*/
	double angle_b();
	/*
	* \brief функция нахождения угола альфа
	*/
	double angle_y();
	/*
	* \brief проверка треугольника на вырожденность
	*/
	/*
	* \brief площадь треугольника
	*/
	double get_square()
	{
		return sqrt((sum() / 2) * ((sum() / 2) - get_num1()) * ((sum()) / 2 - get_num2()) * ((sum() / 2) - get_num3()));
	}
	/*
	* \brief проверка треугольника на вырожденность
	*/
	bool proportion(const double a, const double b, const double c);

};