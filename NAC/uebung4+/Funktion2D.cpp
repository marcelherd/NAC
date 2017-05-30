#include <cmath>
#include <limits>
#include <exception>

#include "Funktion2D.h"

float Funktion2D::operator()(const Vektor2D &v) const
{
	Vektor2D &temp = v + Vektor2D(1, 0);
	return -(sin(temp.betrag()) / temp.betrag());
}

Vektor2D const& gradient2D(const Funktion2D &f, const Vektor2D &v)
{
	float fx = (( f( *(new Vektor2D(ABSTAND_H, 0)) + v) - f(v)) / ABSTAND_H);
	float fy = (( f( *(new Vektor2D(0, ABSTAND_H)) + v) - f(v)) / ABSTAND_H);

	if (isnan(fx) || isnan(fy)) {
		throw std::domain_error("Definitionsluecke");
	}
	
	return *(new Vektor2D(fx, fy));
}

Vektor2D const& minimieren2D(const Funktion2D &f, const Vektor2D &start, float step, int maxIterations, float tol, float ftol)
{
	if (maxIterations <= 0) {
		return start;
	}

	Vektor2D gradient = gradient2D(f, start);
	if (gradient.betrag() < tol) {
		return start;
	}

	float abnahme = f(start) - f(start + (gradient * -step));
	if (abnahme < ftol) {
		return start;
	}

	return minimieren2D(f, start + (gradient * -step), step, (maxIterations - 1), tol, ftol);
}