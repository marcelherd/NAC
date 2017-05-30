#include <string>
#include <iostream>
#include <clocale>

#include "Funktion2D.h"

void wait();

int main(int argc, char* argv[])
{
	

	Vektor2D v(4, 0);
	Funktion2D f;
	std::cout << "Funktionswert mit v=(4,0): " << f(v) << std::endl;
	Vektor2D grad = gradient2D(f, v);

	grad.ausgabe();

	Vektor2D t = minimieren2D(f, v, 1.4, 2000);
	std::cout << "Minimum mit v=(3,1) an Stelle ";
	t.ausgabe();
	std::cout << f(t) << std::endl;
	wait();

	return 0;
}

void wait()
{
	int i;
	std::cin >> i;
}