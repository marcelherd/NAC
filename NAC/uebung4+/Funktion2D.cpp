#include <cmath>

#include "Funktion2D.h"

float Funktion2D::operator()(const Vektor2D &v) const
{
	Vektor2D temp = Vektor2D(v + Vektor2D(1, 0));
	return (sin(temp.betrag()) / temp.betrag()) * -1;
}

Vektor2D const& gradient2D(const Funktion2D &f, const Vektor2D &v)
{
	Vektor2D h1(ABSTAND_H, 0); // H für Ableitung nach v1
	Vektor2D h2(0, ABSTAND_H); // H für Ableitung nach v2

	float f1 = (f(v + h1) - f(v)) / (2 * ABSTAND_H);
	float f2 = (f(v + h2) - f(v)) / (2 * ABSTAND_H);

	return *(new Vektor2D(f1, f2));
}

Vektor2D const& minimieren2D(const Funktion2D &f, const Vektor2D &start, float step, int maxIterations, float tol, float ftol)
{
	Vektor2D *retval = new Vektor2D;
	Vektor2D gradient = gradient2D(f, start);
	
	if (gradient.betrag() < 0) {
		Vektor2D gradient2 = minimieren2D(f, start * step, step, maxIterations - 1, tol, ftol);
	}
	else {
		Vektor2D gradient2 = minimieren2D(f, start * -step, step, maxIterations - 1, tol, ftol);
	}

	return *retval;
}