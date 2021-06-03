#pragma once
#include "Figure.h"
/*
* \brief Дочерний класс эллипс
*/
class Ellipse : public Figure {
private:

    /*
    * \brief Сторона
    */
    double a;

    /*
    * \brief Сторона
    */
    double b;
    const double pi = 3.14159265358979323846;
public:

    /*
    * \brief Конструктор по умолчанию
    */
    Ellipse(double a, double b)
    {
        this->a = a;
        this->b = b;
    }

    /*
    * \brief Конструктор копирования по умолчанию
    */
    Ellipse(const Ellipse& el) = default;

    /*
    * \brief Деструктор
    */
    ~Ellipse() = default;

    /*
    * \brief Метод вычисления периметра
    */
    double Perimetr() override;
    /*
    * \brief Метод вычисления площади
    */
    double Area() override;

};