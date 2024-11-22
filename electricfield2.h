#ifndef ELECTRICFIELD2_H
#define ELECTRICFIELD2_H
#include <iostream>
#include "field.h"

class Electric_Field : public Field
{
	private:
	  double *E;
	public:
	  Electric_Field() : Field() {} ;
	  Electric_Field(double x, double y, double z): Field(x, y, z) {}

	  double calculateField(double Q, double r);

	  Electric_Field operator+(const Electric_Field &other) const {
	  		Electric_Field eNew(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]);
	  		return eNew;
	  }
};

#endif

