#pragma once

class Matrix
{
protected:
	int m_Zeilen;
	int m_Spalten;

	float m_Element[2];

public:
	Matrix();
	virtual ~Matrix();

	void ausgabe();
};