#include "electricfield2.h"
#include <cmath>

#define pi 3.1415926538979
#define epsilon_naught 8.854e-12

double Electric_Field::calculateField(double Q, double r)
{
	double E_Field = Q / (4 * pi * pow(r, 2) * epsilon_naught);
	return E_Field;
}
