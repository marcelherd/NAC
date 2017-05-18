#pragma once

#include "Matrix.h"

class Vektor : public Matrix
{
public:
	Vektor(int spalten);
	virtual ~Vektor();

	float betrag();
	float skalarprodukt(Vektor v);
	float winkel(Vektor v);
	void addiere(Vektor v);
};