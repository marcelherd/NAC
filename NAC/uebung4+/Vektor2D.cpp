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

Vektor2D Vektor2D::operator+(const Vektor2D &other) const
{
	return Vektor2D(m_Element[0] + other.m_Element[0],
		m_Element[1] + other.m_Element[1]);
}

Vektor2D Vektor2D::operator-(const Vektor2D &other) const
{
	return Vektor2D(m_Element[0] - other.m_Element[0],
		m_Element[1] - other.m_Element[1]);
}

Vektor2D Vektor2D::operator*(const float number) const
{
	return Vektor2D(m_Element[0] * number,
		m_Element[1] * number);
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

std::ostream& operator<<(std::ostream &stream, const Vektor2D &v)
{
	return stream << "(" << v.m_Element[0] << ", " << v.m_Element[1] << ")";
}
