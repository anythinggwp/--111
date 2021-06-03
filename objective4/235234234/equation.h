#pragma once
#include "myexeption.h"
#include <cmath>
#include <ostream>
/*
* brief Структура для хранения корней уравнения;
*/
struct roots
{
	double root1;
	double root2;
	friend std::ostream& operator<<(std::ostream& os, const roots& obj);
};
/*
* \brief Класса для вычесления корней квадратного уравнения
*/
class equation
{
private:
	/*
	* brief Корни уравнения и дискриминант
	*/
	roots one;
	double disc;
public:
	/*
	* \brief Конструктор с коэф уравнения
	*/
	equation(const double a, const double b, const double c)
	{
		this->one.root1 = (-b + sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
		this->one.root2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / 2 * a;
		this->disc = pow(b, 2) - (4 * a * c);
	}
	~equation() = default;
	/*
	* Геттер для корней уоавнения
	*/
	roots get_roots();
	/*
	* \brief Геттер дискриминанта
	*/
	double get_disc();
	/*
	* \brief Функция без спецификации исключений
	*/
	roots noexep();
	/*
	* \brief Функция со спецификацией throw();
	*/
	roots with_thow() throw();
	/*
	* \brief Функция с конкретной спецификацией с подходящим стандартным исключением
	*/
	roots invalid_throw() throw(invalid_argument);
	/*
	* \brief спецификация с собственным реализованным исключением: как пустой клас
	*/
	roots empty() throw(empty_exeption);
	/*
	* \brief спецификация с собственным реализованным исключением: как независимый класс с полями-параметрами функции
	*/
	roots my_exp1() throw(my_exeption1);
	/*
	* \brief спецификация с собственным реализованным исключением: как наследник от стандартного исключения с полями
	*/
	roots my_exp2() throw(my_exeption2);
};