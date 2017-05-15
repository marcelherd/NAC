#include <cmath>
#include <limits>

#include "Vektor.h"

#define PI 3.14159265358979323846

Vektor::Vektor()
{

}

Vektor::~Vektor()
{

}

float Vektor::betrag()
{
	return sqrt(skalarprodukt(*this));
}

float Vektor::skalarprodukt(Vektor v)
{
	if (m_Spalten != v.m_Spalten || m_Zeilen != v.m_Zeilen) {
		return std::numeric_limits<float>::quiet_NaN();
	}

	float retval = 0.0;
	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		retval += m_Element[i] * v.m_Element[i];
	}
	return retval;
}

float Vektor::winkel(Vektor v)
{
	if (m_Spalten != v.m_Spalten || m_Zeilen != v.m_Zeilen) {
		return std::numeric_limits<float>::quiet_NaN();
	}

	float retval = skalarprodukt(v) / (betrag() * v.betrag());
	return acos(retval) * 180.0 / PI;
}

void Vektor::addiere(Vektor v)
{
	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		m_Element[i] += v.m_Element[i];
	}
}