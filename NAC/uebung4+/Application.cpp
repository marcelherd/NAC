#include <string>
#include <iostream>
#include <clocale>

#include "Funktion2D.h"

void wait();
void ausgabe(const Funktion2D &f, const Vektor2D &v, const std::string &msg);

int main(int argc, char* argv[])
{
	Vektor2D v1(4, 0);
	Vektor2D v2(4, 1);
	Vektor2D v3(3.0f, 1.0f);

	Funktion2D f;

	ausgabe(f, v1, "Vektor v1 (4, 0)");
	ausgabe(f, v2, "Vektor v2 (4, 1)");
	ausgabe(f, v3, "Vektor v3 (3.0, 1.0)");

	Vektor2D vt(-1, 0);
	ausgabe(f, vt, "Vektor vt (-1, 0)");

	wait();

	return 0;
}

void wait()
{
	int i;
	std::cin >> i;
}

void ausgabe(const Funktion2D &f, const Vektor2D &v, const std::string &msg)
{
	std::cout << msg << std::endl;

	Vektor2D minima = minimieren2D(f, v, 1.4f, 10000);
	std::cout << "Minima: " << minima << std::endl;
	std::cout << "Funktionswert am Minima: " << f(minima) << std::endl << std::endl;
}