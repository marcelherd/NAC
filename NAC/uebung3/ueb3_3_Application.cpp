#include <string>
#include <iostream>
#include <clocale>

#include "ueb3_3_Vektor2D.h"

void ausgeben(std::string name, Vektor2D* vektor);

int main(int argc, char* argv[])
{
	std::setlocale(LC_ALL, "german");

	Vektor2D a(3, 1), u(1, 2);

	Vektor2D* w = new Vektor2D;

	u.kopiereIn(w);
	u.kopiereIn(&a);

	ausgeben("w", w);
	ausgeben("a", &a);

	for (;;);

	return 0;
}

void ausgeben(std::string name, Vektor2D* vektor)
{
	std::cout << "Vektor " << name << " = ";
	vektor->ausgabe();
	std::cout << std::endl;
}