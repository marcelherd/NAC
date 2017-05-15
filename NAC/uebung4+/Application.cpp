#include <string>
#include <iostream>
#include <clocale>

#include "Vektor2D.h"

void ausgeben(std::string name, Vektor2D* vektor);

int main(int argc, char* argv[])
{
	std::setlocale(LC_ALL, "german");

	{
		Vektor2D v(1, 2), w(3, 4);
		Matrix M;
		Matrix* Mpointer;
		M = v;
		Mpointer = &v;
		std::cout << "Ausgabe von M und über Mpointer" << std::endl;
		M.ausgabe();
		Mpointer->ausgabe();
		v.addiere(w);
		std::cout << "Ausgabe von v nach Addieren" << std::endl;
		v.ausgabe();
		std::cout << "Ausgabe von M/Mpointer nach Add." << std::endl;
		M.ausgabe();
		Mpointer->ausgabe();
	}

	std::cout << "Anzahl Instanzen=" << Matrix::getCounter() << std::endl;

	Vektor2D x(1, 1), y(-5, 0);

	std::cout << "Winkel zwischen x und y = " << x.winkel(y) << "°" << std::endl;

	for (;;);

	return 0;
}

void ausgeben(std::string name, Vektor2D* vektor)
{
	std::cout << "Vektor " << name << " = ";
	vektor->ausgabe();
	std::cout << std::endl;
}