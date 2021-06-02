﻿#include "equation.h"
void main()
{
	setlocale(LC_ALL, "ru");
	long double a, b, c;
	cout << "Enter a:" << "\n";
	cin >> a;
	cout << "Enter b:" << "\n";
	cin >> b;
	cout << "Enter c:" << "\n";
	cin >> c;
	equation first(a,b,c);
	cout << first.get_roots() << "\n";
	cout << first.get_disc() << endl;

	try
	{
		cout<<first.noexep()<<"\n";
	}
	catch (...)
	{
		cout << "Произошло исключение в функции noexep" << endl;
	}
	try
	{
		cout << first.with_thow()<< "\n";
	}
	catch (...)
	{
		cout << "Произошло исключение в функции empty" << endl;
	}
	try
	{
		first.invalid_throw();
	}
	catch (invalid_argument &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		first.empty();
	}
	catch (empty_exeption)
	{
		cout << "Произошло исключение empty_exeption в функции " << endl;
	}
	try
	{
		first.my_exp1();
	}
	catch (my_exeption1 &e)
	{
		cout << e.message() << endl;
	}
	try
	{
		first.my_exp2();
	}
	catch (my_exeption2 &e)
	{
		cout << e.what() << " " << e.arg() << endl;
	}
}