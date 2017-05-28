#include <string>
#include <iostream>
#include <clocale>

#include "Funktion2D.h"

void wait();

int main(int argc, char* argv[])
{
	std::setlocale(LC_ALL, "german");

	Vektor2D v(4, 0);
	Funktion2D f;
	std::cout << "Funktionswert mit v=(4,0): " << f(v) << std::endl;
	Vektor2D grad = gradient2D(f, v);


	wait();

	return 0;
}

void wait()
{
	int i;
	std::cin >> i;
}