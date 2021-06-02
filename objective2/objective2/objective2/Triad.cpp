#include "Triad.h"
double Triad::get_num1() const { return num1; }
double Triad::get_num2() const { return num2; }
double Triad::get_num3() const { return num3; }
double Triad::sum() const { return num1 + num2 + num3; }
ostream& operator<<(ostream& os, const Triad& obj)
{
	return os << "Числа в триаде: " << obj.get_num1() << "," << obj.get_num2() 
		<< "," << obj.get_num3() << " Сумма триады = " << obj.sum();
}