#include "electricfield2.cpp"
#include "magneticfield2.cpp"
#include "field.cpp"

int main()
{
	Electric_Field e1(1e5, 10.9, 1.7e2);
	std::cout << "Electric Field 1: " << e1 << std::endl;
	std::cout << "Outputting Magnitude of Electric Field 1: " << e1.printMagnitude() << std::endl;

	Electric_Field e2(1e3, 23.4, 2.5e2);
	std::cout << "Outputting Magnitude of Electric Field 2: " << e2.printMagnitude() << std::endl;

	Electric_Field e3;
	e3 = e1 + e2;

	std::cout << "Outputting combined Electric Field Magnitude:" << e3.printMagnitude() << std::endl;

	double Q = 1.563e-12;
	double e_r = 0.02;

	std::cout << "\nCalculating Electric Field with charge Q " << Q << " coulombs, and radius " << e_r << " meters: " << e1.calculateField(Q, e_r) << std::endl;

	Magnetic_Field m1(12, 24, 1e3);
	std::cout << "\nOutputting Magnitude of Magnetic Field 1: " << m1.printMagnitude() << std::endl;

	Magnetic_Field m2(21, 42, 2.5e2);
	std::cout << "Magnetic Field 2: " << m2 << std::endl;
	std::cout << "Outputting Magnitude of Magnetic Field 2: " << m2.printMagnitude() << std::endl;

	Magnetic_Field m3;
	m3 = m1 + m2;

	std::cout << "Outputting combined Magnetic Field Magnitude: " << m3.printMagnitude() << std::endl;

	double I = 5;
	double m_r = 0.15;

	std::cout << "\nCalculating Magnetic Field with current " << I << " amps, and radius " << m_r << " meters: " << m1.calculateField(I, m_r) << std::endl;

	return 0;
}
