#pragma once

#include "Vektor.h"
#include <iostream>

class Vektor2D : public Vektor
{
public:
	Vektor2D();
	Vektor2D(float x, float y);
	Vektor2D(const Vektor2D &other);
	virtual ~Vektor2D();

	Vektor2D operator+(const Vektor2D &other) const;
	Vektor2D operator-(const Vektor2D &other) const;
	Vektor2D operator*(const float number) const;

	void kopiereIn(Vektor2D *zielvar) const;
	void ausgabe() const;

	friend std::ostream& operator<<(std::ostream& stream, const Vektor2D &v);
};