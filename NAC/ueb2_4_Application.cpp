#include <iostream>

#include "ueb2_3_Vektor2D.h"

int main(int argc, char* argv[])
{
	Vektor2D a(3, 1), b(1, 2), c;
	c.addiere(a);
	b.addiere(c);

	std::cout << "Betrag von b: " << b.betrag() << std::endl;
	b.ausgabe();

	for (;;);

	return 0;
}