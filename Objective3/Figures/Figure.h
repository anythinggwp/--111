#pragma once
# define M_PI           3.14159265358979323846  /* pi */
#include <cmath>
// 5. Написать программу, в которой описана иерархия классов: геометрические фигуры (ромб, параллелепипед, эллипс). 
// Реализовать методы вычисления площади и периметра фигуры. 
// Продемонстрировать работу всех методов классов, предоставив пользователю выбор типа фигуры для демонстрации


/*
* \brief Интерфейс геометрические фигуры
*/
class Figure {
public:

    /*
    * \brief Чистая виртуальная функция для вычисления площади фигуры
    */
    virtual double Area() = 0;
    virtual double Perimetr() = 0;

    /*
    * \brief Виртуальный деструктор
    */
    virtual ~Figure() = default;

};

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
    double Perimetr() override {
        return 4 * a;
    };

    /*
    * \brief Метод вычисления площади
    */
    double Area() override {
        return  a * h;
    };

};

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
    double Area() override 
    {
        return 2 * a * b + 2 * a * c + 2 * b * c;
    };
    double Perimetr() override 
    {
        return 4 * (a + b + c);
    }
};

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
    Ellipse(const Ellipse &el) = default;

    /*
    * \brief Деструктор
    */
    ~Ellipse() = default;

    /*
    * \brief Метод вычисления периметра
    */
    double Perimetr() override
    {
        return 4 * (M_PI * a * b + pow(a - b, 2)) / (a + b);
    };

    /*
    * \brief Метод вычисления площади
    */
    double Area() override 
    {
        return a * b * M_PI;
    };

};