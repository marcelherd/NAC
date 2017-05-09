#pragma once

#include "ueb2_1_Matrix.h"

class Vektor : public Matrix
{
public:
	Vektor();
	virtual ~Vektor();

	float betrag();
	void addiere(Vektor v);
};