#pragma once

#include "Matrix.h"

class Vektor : public Matrix
{
public:
	Vektor(int spalten);
	virtual ~Vektor();

	float betrag() const;
	float skalarprodukt(Vektor v) const;
	float winkel(Vektor v) const;
	void addiere(Vektor v);
	void subtrahiere(Vektor v);
};