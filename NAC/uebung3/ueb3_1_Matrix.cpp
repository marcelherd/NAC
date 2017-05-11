#include <iostream>

#include "ueb3_1_Matrix.h"

Matrix::Matrix()
	: m_Zeilen(2), m_Spalten(1)
{
	std::cout << "Standardkonstruktor von Matrix wurde aufgerufen" << std::endl;

	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		m_Element[i] = 0;
	}
}

Matrix::~Matrix()
{
	std::cout << "Matrix (";
	ausgabe();
	std::cout << ") wird zerstört" << std::endl;
}

void Matrix::ausgabe()
{
	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		std::cout << m_Element[i] << " ";
	}
}