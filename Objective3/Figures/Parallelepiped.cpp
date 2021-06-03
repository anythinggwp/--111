#include "Parallelepiped.h"
double Parallelepiped::Area(){ return 2 * a * b + 2 * a * c + 2 * b * c; }
double Parallelepiped::Perimetr(){ return 4 * (a + b + c); }