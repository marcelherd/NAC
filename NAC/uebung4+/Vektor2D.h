#pragma once

#include "Vektor.h"

class Vektor2D : public Vektor
{
public:
	Vektor2D();
	Vektor2D(float x, float y);
	virtual ~Vektor2D();

	void kopiereIn(Vektor2D *zielvar) const;
	void ausgabe() const;
};