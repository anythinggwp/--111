#pragma once
#include "Figure.h"
/*
* \brief Дочерний класс параллелепипед
*/
class Parallelepiped : public Figure {
private:

    /*
    * \brief Сторона
    */
    double a;

    /*
    * \brief Сторона
    */
    double b;

    /*
    * \brief Сторона
    */
    double c;

public:

    /*
    * \brief Конструктор по умолчанию
    */
    Parallelepiped(double a, double b, double c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    /*
    * \brief Конструктор копирования по умолчанию
    */
    Parallelepiped(const Parallelepiped& parped) = default;

    /*
    * \brief Деструктор
    */
    ~Parallelepiped() = default;

    /*
    * \brief Метод вычисления площади
    */
    double Area() override;
    double Perimetr() override;
};