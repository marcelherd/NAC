#include <string>
#include <iostream>
#include <exception>

#include "Funktion2D.h"

void wait();
void ausgabe(const Funktion2D &f, const Vektor2D &v, const std::string &msg);

int main(int argc, char* argv[])
{
	Funktion2D f;

	Vektor2D v1(4, 0);
	Vektor2D v2(4, 1);

	std::cout << v1 + v2 << std::endl;

	Vektor2D v3(3.0f, 1.0f);

	ausgabe(f, v1, "Vektor v1 (4, 0)");
	ausgabe(f, v2, "Vektor v2 (4, 1)");
	ausgabe(f, v3, "Vektor v3 (3.0, 1.0)");

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
	try {
		std::cout << msg << std::endl;
		Vektor2D minima = minimieren2D(f, v, 1.4f, 10000);
		std::cout << "Minima: " << minima << std::endl;
		std::cout << "Funktionswert am Minima: " << f(minima) << std::endl << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Minima konnte nicht bestimmt werden: " << e.what() << std::endl << std::endl;
	}
}