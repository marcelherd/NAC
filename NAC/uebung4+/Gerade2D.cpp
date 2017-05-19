#include "Gerade2D.h"

Gerade2D::Gerade2D(Vektor2D normale, Vektor2D aufpunkt)
	: m_Normale(normale), m_Aufpunkt(aufpunkt)
{

}

Gerade2D::~Gerade2D()
{

}

float Gerade2D::gerichteterAbstand(Vektor2D v) const
{
	Vektor2D diff(v);
	diff.subtrahiere(m_Aufpunkt);

	return m_Normale.skalarprodukt(diff) / m_Normale.betrag();
}

bool Gerade2D::aufGerade(const Vektor2D &x) const
{
	// TODO
	return true;
}

void Gerade2D::normale(const Vektor2D &normale)
{
	m_Normale = normale;
}

Vektor2D const& Gerade2D::normale() const
{
	return m_Normale;
}

void Gerade2D::aufpunkt(const Vektor2D &aufpunkt)
{
	m_Aufpunkt = aufpunkt;
}

Vektor2D const& Gerade2D::aufpunkt() const
{
	return m_Aufpunkt;
}