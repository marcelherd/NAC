#include <cmath>

#include "ueb2_2_Vektor.h"

Vektor::Vektor()
{

}

Vektor::~Vektor()
{

}

float Vektor::betrag()
{
	float sum = 0.0;

	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		sum += pow(m_Element[i], 2);
	}

	return sqrt(sum);
}

void Vektor::addiere(Vektor v)
{
	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		m_Element[i] += v.m_Element[i];
	}
}