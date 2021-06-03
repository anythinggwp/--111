#pragma once
#include "Triad.h"
#include <iostream>
class Triangle : public Triad
{
private:
	const double pi = 3.14159265358979323846;
	const int sum_angle = 180;
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
	friend ostream& operator<<(ostream& os, const Triangle& obj);
	void set_num1(const double num) override;
	void set_num2(const double num) override;
	void set_num3(const double num) override;
	double angle_a() const;
	/*
	* \brief функция нахождения угола альфа
	*/
	double angle_b() const;
	/*
	* \brief функция нахождения угола альфа
	*/
	double angle_y() const;
	/*
	* \brief проверка треугольника на вырожденность
	*/
	/*
	* \brief площадь треугольника
	*/
	double get_square() const;
	/*
	* \brief проверка треугольника на вырожденность
	*/
	bool proportion(const double a, const double b, const double c);

};