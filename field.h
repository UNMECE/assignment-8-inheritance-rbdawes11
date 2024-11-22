#ifndef FIELD_H
#define FIELD_H
#include <iostream>

class Field
{
	protected:
	  double *value;
	
	public:
	  Field();
	  Field(double x, double y, double z);

	  Field(const Field &other)
	  {
	  	value = new double[3];
	  	for(int i = 0; i < 3; i++)
	  		value[i] = other.value[i];
	  }
	 
	  double printMagnitude();
	 
	  friend std::ostream &operator<<(std::ostream &os, const Field &field) {
        os << "(" << field.value[0] << ", " << field.value[1] << ", " << field.value[2] << ")";
        return os;
      }
};
#endif
