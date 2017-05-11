#include "ueb3_4_Vektor2D.h"

Vektor2D::Vektor2D()
{

}

Vektor2D::~Vektor2D()
{

}

Vektor2D::Vektor2D(float x, float y)
{
	m_Element[0] = x;
	m_Element[1] = y;
}

void Vektor2D::kopiereIn(Vektor2D *zielvar)
{
	zielvar->m_Element[0] = m_Element[0];
	zielvar->m_Element[1] = m_Element[1];
}

void tausche(Vektor2D *a, Vektor2D *b)
{
	Vektor2D temp;
	a->kopiereIn(&temp);
	b->kopiereIn(a);
	temp.kopiereIn(b);
}