#pragma once
#include "Figure.h"
/*
* \brief Дочерний класс ромб
*/
class Rhomb : public Figure {
private:

    /*
    * \brief Сторона ромба
    */
    double a;
    double h;

public:

    /*
    * \brief Конструктор по умолчанию
    */
    Rhomb(const double a, const double h)
    {
        this->a = a;
        this->h = h;
    }

    /*
    * \brief Конструктор копирования по умолчанию
    */
    Rhomb(const Rhomb& rhomb) = default;

    /*
    * \brief Деструктор
    */
    ~Rhomb() = default;

    /*
    * \brief Метод вычисления периметра
    */
    double Perimetr() override;

    /*
    * \brief Метод вычисления площади
    */
    double Area() override;

};