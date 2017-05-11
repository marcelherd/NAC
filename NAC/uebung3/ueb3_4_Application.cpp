#include <string>
#include <iostream>
#include <clocale>

#include "ueb3_4_Vektor2D.h"

void ausgeben(std::string name, Vektor2D* vektor);
void tausche(Vektor2D *a, Vektor2D *b);

int main(int argc, char* argv[])
{
	std::setlocale(LC_ALL, "german");

	Vektor2D a(3, 1), z(1, 2);
	tausche(&a, &z);

	ausgeben("a", &a);
	ausgeben("z", &z);

	for (;;);

	return 0;
}

void ausgeben(std::string name, Vektor2D* vektor)
{
	std::cout << "Vektor " << name << " = ";
	vektor->ausgabe();
	std::cout << std::endl;
}