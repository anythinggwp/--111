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
    /**
    *\briefКонструктор по умолчанию
    */
    Triangle()
    {

    }
    /*
    * \brief Кастомный конструктор класса Triangle принимающий значения сторон
    * \param значение сторон: а,b,c
    */
    Triangle(double valuea, double valueb, double valuec);
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
    void set_a(double valuea);
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
    void set_b(double valueb);
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
    void set_c(double valuec);
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
    string mod_of_triangle();
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

};