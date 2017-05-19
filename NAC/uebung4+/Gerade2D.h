#pragma once

#include "Vektor2D.h"

class Gerade2D
{
private:
	Vektor2D m_Normale;
	Vektor2D m_Aufpunkt;

public:
	Gerade2D(Vektor2D normale, Vektor2D aufpunkt = Vektor2D(0, 0));
	virtual ~Gerade2D();

	float gerichteterAbstand(Vektor2D v) const;
	bool aufGerade(const Vektor2D &x) const;

	void normale(const Vektor2D &normale);
	Vektor2D const& normale() const;
	void aufpunkt(const Vektor2D &aufpunkt);
	Vektor2D const& aufpunkt() const;
};