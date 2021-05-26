#pragma once
#include <cmath>
using namespace std;
class Triad
{
private:
	double num_1;
	double num_2;
	double num_3;
public:
	
	Triad() = default;
	Triad(const double num1, const double num2, const double num3)
	{
		set_num1(num1);
		set_num2(num2);
		set_num3(num3);
	}
	Triad(const Triad& other)
	{
		this->num_1 = other.num_1;
		this->num_2 = other.num_2;
		this->num_3 = other.num_3;
	}
	~Triad() = default;
	void set_num1(const double num)
	{
		this->num_1 = num;
	}
	void set_num2(const double num)
	{
		this->num_2 = num;
	}
	void set_num3(const double num)
	{
		this->num_3 = num;
	}
	double get_num1()
	{
		return num_1;
	}
	double get_num2()
	{
		return num_2;
	}
	double get_num3()
	{
		return num_3;
	}
	double sum()
	{
		return num_1 + num_2 + num_3;
	}
};
