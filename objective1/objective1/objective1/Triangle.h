#pragma once
#include <iostream>
#include <string>
using namespace std;
/**
*\briefКласс Triangle
*/
class Triangle
{
private:
    /*
    * \brief Здесь содержаться стороны треугольника
    * \param сторона a
    * \param сторона b
    * \param сторона с
    */
    double _a;
    double _b;
    double _c;
public:
    /*
    * \brief Кастомный конструктор класса Triangle принимающий значения сторон
    * \param значение сторон: а,b,c
    */
    Triangle(const double valuea,const double valueb,const double valuec);
    /*
    * \brief Конструктор копирования класса Triangle
    */
    Triangle(const Triangle &other)
    {
        this->_a = other._a;
        this->_b = other._b;
        this->_c = other._c;
    }
    /*
    *\brief Диструктор класса Triangle
    */
    ~Triangle() = default;
    /*
    * \brief Геттер стороны a
    * \param возвращает сторону a
    */
    double get_a()
    {
        return _a;
    }
    /*
    * \brief Сеттер стороны a
    * \param изменяет значение стороны a (принимает значения исключительно больше нуля)
    */
    void set_a(const double valuea);
    /*
     * \brief Геттер стороны b
     * \param возвращает сторону b
     */
    double get_b()
    {
        return _b;
    }
    /*
    * \brief Сеттер стороны b
    * \param изменяет значение стороны b (принимает значения исключительно больше нуля)
    */
    void set_b(const double valueb);
    /*
     * \brief Геттер стороны c
     * \param возвращает сторону c
     */
    double get_c()
    {
        return _c;
    }
    /*
    * \brief Сеттер стороны c
    * \param изменяет значение стороны c (принимает значения исключительно больше нуля)
    */
    void set_c(const double valuec);
    /*
     * \brief Геттер периметра треугольника
     * \param Вычисляет и возвращает периметр
     */
    double get_perimetr()
    {
        return _a + _b + _c;
    }
    /*
     * \brief Геттер площади треугольника
     * \param Вычисляет и возвращает площадь
     */
    double get_square()
    {
        return sqrt((get_perimetr() / 2) * ((get_perimetr() / 2) - _a) * ((get_perimetr()) / 2 - _b) * ((get_perimetr() / 2) - _c));
    }
     /*
     * \brief Функция определяющая вид треугольника (прямоугольный,равносторонний,равнобедренный)
     * \param сторонный треугольника
     */
    string mod_triangle();
     /*
     * \brief Геттер высоты треугольника от стороны a
     * \param Вычисляет и возвращает высоту треугольника от стороны а
     */
    double get_ha()
    {
        return 2 * get_square() / _a;
    }
    /*
    * \brief Геттер высоты треугольника от стороны b
    * \param Вычисляет и возвращает высоту треугольника от стороны b
    */
    double get_hb()
    {
        return 2 * get_square() /_b;
    }
    /*
    * \brief Геттер высоты треугольника от стороны c
    * \param Вычисляет и возвращает высоту треугольника от стороны c
    */
    double get_hc()
    {
        return 2 * get_square() / _c;
    }
    /*
    * \brief Функция сравнивающая тип данных double
    * \param значение первой стороны
    * \param значение второй стороны
    * \param точность с которой будем сравнивать две стороны
    */
    bool double_compare(double value_a, double value_b, double eps);
    /*
    * \brief Функция проверяющая на соответсвие треугольника реальным пропорциям
    * \param значение стороны a
    * \param значение стороны b
    * \param значение стороны c
    */
    bool proportion(const double value_a,const double value_b,const double value_c);
};