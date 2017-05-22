#include <cmath>

#include "Funktion2D.h"

float Funktion2D::operator()(const Vektor2D &v) const
{
	Vektor2D temp = Vektor2D(v + Vektor2D(1, 0));

	return 0.0f;
}