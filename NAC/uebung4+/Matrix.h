#pragma once

class Matrix
{
private:
	static int counter;

protected:
	int m_Zeilen;
	int m_Spalten;

	float m_Element[2];

public:
	Matrix();
	virtual ~Matrix();

	static int getCounter();

	virtual void ausgabe();
};