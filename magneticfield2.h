#ifndef MAGNETICFIELD2_H
#define MAGNETICFIELD2_H
#include <iostream>
#include "field.h"

class Magnetic_Field : public Field
{
	private:
		double *M;
	public:
		Magnetic_Field() : Field() {} ;
		Magnetic_Field(double x, double y, double z): Field(x, y, z) {}

		double calculateField(double I, double r);

		Magnetic_Field operator+(const Magnetic_Field &other) const {
	  		Magnetic_Field mNew(value[0] + other.value[0], value[1] + other.value[1], value[2] + other.value[2]);
	  		return mNew;
	    }
};
#endif

