#include <string>
#include <iostream>
#include <clocale>

#include "Gerade2D.h"

void wait();

int main(int argc, char* argv[])
{
	std::setlocale(LC_ALL, "german");

	Vektor2D vectors[3];

	Vektor2D* varr[2];
	varr[0] = new Vektor2D(2, 3);
	varr[1] = new Vektor2D(-2, 1);
	varr[0]->addiere(*(varr[1]));
	varr[0]->ausgabe();
	delete varr[0];
	delete varr[1];

	std::cout << Gerade2D(Vektor2D(-3, -4)).aufGerade(Vektor2D(4, -3)) << std::endl;

	wait();

	return 0;
}

void wait()
{
	int i;
	std::cin >> i;
}