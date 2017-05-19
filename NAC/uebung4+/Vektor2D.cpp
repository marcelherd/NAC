#include <iostream>

#include "Vektor2D.h"

Vektor2D::Vektor2D()
	: Vektor(2)
{
	std::cout << "Vektor2D() Konstruktor" << std::endl;
}

Vektor2D::~Vektor2D()
{
	std::cout << "Vektor2D Destruktor" << std::endl;
}

Vektor2D::Vektor2D(float x, float y)
	: Vektor(2)
{
	m_Element[0] = x;
	m_Element[1] = y;
}

void Vektor2D::kopiereIn(Vektor2D *zielvar) const
{
	zielvar->m_Element[0] = m_Element[0];
	zielvar->m_Element[1] = m_Element[1];
}

void Vektor2D::ausgabe() const
{
	std::cout << "Vektor2D:";
	Matrix::ausgabe();
}

void tausche(Vektor2D *a, Vektor2D *b)
{
	Vektor2D temp;
	a->kopiereIn(&temp);
	b->kopiereIn(a);
	temp.kopiereIn(b);
}