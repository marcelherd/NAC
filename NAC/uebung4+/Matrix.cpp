#include <iostream>

#include "Matrix.h"

int Matrix::counter = 0;

Matrix::Matrix(int m, int n)
{
	std::cout << "Matrix(m, n) Konstruktor" << std::endl;

	m_Zeilen = m;
	m_Spalten = n;
	m_Element = new float[m * n];

	counter++;
}

Matrix::~Matrix()
{
	std::cout << "Matrix Destruktor" << std::endl;

	// delete[] m_Element;

	counter--;
}

int Matrix::getCounter()
{
	return counter;
}

void Matrix::ausgabe() const
{
	for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
		std::cout << m_Element[i] << " ";
	}
	std::cout << std::endl;
}