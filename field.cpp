#include "field.h"

Field::Field()
{
	value = new double[3];
	for (int i = 0; i < 3; i++)
	  value[i] = 0;
}

Field::Field(double x, double y, double z)
{
	value = new double[3];
	value[0] = x;
	value[1] = y;
	value[2] = z;
}
double Field::printMagnitude()
{
	const double Magnitude = sqrt(pow(value[0], 2) + pow(value[1], 2) + pow(value[2],2));
	return Magnitude;
}
