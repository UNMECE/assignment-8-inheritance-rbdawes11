#include "magneticfield2.h"
#include <cmath>

#define pi 3.1415926538979
#define mu_naught 1.2566e-6

double Magnetic_Field::calculateField(double I, double r)
{
	double B_field = I / (2 * pi * r * mu_naught);
	return B_field;
}

