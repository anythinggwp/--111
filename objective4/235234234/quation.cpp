#include"equation.h"
roots equation::get_roots()
{
	roots temp;
	temp.root1 = one.root1;
	temp.root2 = one.root2;
	return temp;
}
double equation::get_disc(){ return disc; }
roots equation::noexep() { return get_roots(); }
roots equation::with_thow() throw() { return get_roots(); }
roots equation::invalid_throw() throw(invalid_argument)
{
	if (disc < 0)
		throw invalid_argument("дискриминант равен < 0");
	return get_roots();
}
roots equation::empty() throw(empty_exeption)
{
	if (disc < 0)
		throw empty_exeption();
	return get_roots();
}
roots equation::my_exp1() throw(my_exeption1)
{
	if (disc < 0)
		throw my_exeption1("дискриминант равен < 0");
	return get_roots();
}
roots equation::my_exp2() throw(my_exeption2)
{
	if (disc < 0)
		throw my_exeption2("дискриминант равен < 0 = sqrt", disc);
	return get_roots();
}
std::ostream& operator<<(std::ostream& os, const roots& obj)
{
	return os << obj.root1 << ";" << obj.root2;
}