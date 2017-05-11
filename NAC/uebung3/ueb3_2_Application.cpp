#include <string>
#include <iostream>
#include <clocale>

#include "ueb3_2_Vektor2D.h"

void ausgeben(std::string name, Vektor2D* vektor);

int main(int argc, char* argv[])
{
	std::setlocale(LC_ALL, "german");

	Vektor2D a(3, 1), b(1, 2);

	Vektor2D* z = new Vektor2D(-3, 1);
	Vektor2D* w = new Vektor2D;

	a.addiere(*z);
	ausgeben("a", &a);

	w->addiere(*z);
	ausgeben("w", w);

	w->addiere(b);
	ausgeben("w", w);

	delete z;
	delete w;

	for (;;);

	return 0;
}

void ausgeben(std::string name, Vektor2D* vektor)
{
	std::cout << "Vektor " << name << " = ";
	vektor->ausgabe();
	std::cout << std::endl;
}