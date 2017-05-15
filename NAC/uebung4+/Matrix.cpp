#include <iostream>

#include "Matrix.h"

int Matrix::counter = 0;

Matrix::Matrix()
	: m_Zeilen(2), m_Spalten(1)
{
	/*std::cout << "Standardkonstruktor von Matrix wurde aufgerufen" << std::endl;

	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		m_Element[i] = 0;
	}*/
	counter++;
}

Matrix::~Matrix()
{
	/*std::cout << "matrix (";
	ausgabe();
	std::cout << ") wird zerstört" << std::endl;*/
	counter--;
}

int Matrix::getCounter()
{
	return counter;
}

void Matrix::ausgabe()
{
	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		std::cout << m_Element[i] << " ";
	}
	std::cout << std::endl;
}