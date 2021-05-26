#pragma once
#include <cmath>
using namespace std;
class Triad
{
private:
	/*
	* \brief Переменный класса Triad
	*/
	double num1;
	double num2;
	double num3;
public:
	/*
	* \brief Конструктор по умолчанию
	*/
	Triad() = default;
	/*
	* \brief Кастомный конструктор класса
	*/
	Triad(const double num1, const double num2, const double num3)
	{
		set_num1(num1);
		set_num2(num2);
		set_num3(num3);
	}
	/*
	* \brief коструктор копирования по умолчанию
	*/
	Triad(const Triad& other) = default;
	/*
	* \brief деструктор по умолчанию
	*/
	~Triad() = default;
	/*
	* \brief сеттер num1
	*/
	void set_num1(const double num)
	{
		this->num1 = num;
	}
	/*
	* \brief сеттер num2
	*/
	void set_num2(const double num)
	{
		this->num2 = num;
	}
	/*
	* \brief сеттер num3
	*/
	void set_num3(const double num)
	{
		this->num3 = num;
	}
	/*
	* \brief геттер num1
	*/
	double get_num1()
	{
		return num1;
	}
	/*
	* \brief геттер num2
	*/
	double get_num2()
	{
		return num2;
	}
	/*
	* \brief геттер num3
	*/
	double get_num3()
	{
		return num3;
	}
	/*
	* \brief сумма трех чисел
	*/
	double sum()
	{
		return num1 + num2 + num3;
	}
};
