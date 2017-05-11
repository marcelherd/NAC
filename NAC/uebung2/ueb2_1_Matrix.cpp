#include <iostream>

#include "ueb2_1_Matrix.h"

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
	std::cout << "Destruktor von Matrix wurde aufgerufen" << std::endl;
}

void Matrix::ausgabe()
{
	std::cout << "Zeilen: " << m_Zeilen << ", Spalten: " << m_Spalten << std::endl << "Elemente: ";

	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		std::cout << m_Element[i] << " ";
	}

	std::cout << std::endl;
}