#include <cmath>

#include "Funktion2D.h"

float Funktion2D::operator()(const Vektor2D &v) const
{
	Vektor2D temp = Vektor2D(v + Vektor2D(1, 0));
	// TODO überprüfen ob das stimmt Wolframalpha
	return sin(temp.betrag()) / temp.betrag();
}