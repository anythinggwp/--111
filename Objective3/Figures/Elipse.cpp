#include "Ellipse.h"
double Ellipse::Perimetr(){ return 4 * (pi * a * b + pow(a - b, 2)) / (a + b); }
double Ellipse::Area(){ return a * b * pi; }