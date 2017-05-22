#include <iostream>

#include "Vektor2D.h"

Vektor2D::Vektor2D()
	: Vektor(2)
{

}

Vektor2D::Vektor2D(float x, float y)
	: Vektor(2)
{
	m_Element[0] = x;
	m_Element[1] = y;
}

Vektor2D::Vektor2D(const Vektor2D &other)
	: Vektor(2)
{
	other.kopiereIn(this);
}

Vektor2D::~Vektor2D()
{

}

Vektor2D& Vektor2D::operator+(const Vektor2D &other) const
{
	float x = m_Element[0] + other.m_Element[0];
	float y = m_Element[1] + other.m_Element[1];

	Vektor2D* result = new Vektor2D(x, y);

	return *result;
}

Vektor2D& Vektor2D::operator*(const float number) const
{
	float x = m_Element[0] * number;
	float y = m_Element[1] * number;

	Vektor2D* result = new Vektor2D(x, y);

	return *result;
}


void Vektor2D::kopiereIn(Vektor2D *zielvar) const
{
	zielvar->m_Element[0] = m_Element[0];
	zielvar->m_Element[1] = m_Element[1];
}

void Vektor2D::ausgabe() const
{
	std::cout << "Vektor2D: ";
	Matrix::ausgabe();
}

void tausche(Vektor2D *a, Vektor2D *b)
{
	Vektor2D temp;
	a->kopiereIn(&temp);
	b->kopiereIn(a);
	temp.kopiereIn(b);
}