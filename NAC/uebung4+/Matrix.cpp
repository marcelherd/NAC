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

Matrix::Matrix(const Matrix &other)
{
	std::cout << "Matrix(&other) Konstruktor" << std::endl;

	m_Zeilen = other.m_Zeilen;
	m_Spalten = other.m_Spalten;
	m_Element = new float[m_Zeilen * m_Spalten];

	counter++;
}

Matrix::~Matrix()
{
	std::cout << "Matrix Destruktor" << std::endl;

	delete[] m_Element;

	counter--;
}

Matrix& Matrix::operator=(const Matrix &other)
{
	if (this != &other) {
		delete[] m_Element;

		m_Zeilen = other.m_Zeilen;
		m_Spalten = other.m_Spalten;
		m_Element = new float[m_Zeilen * m_Spalten];

		for (int i = 0; i < (m_Zeilen * m_Spalten); i++) {
			m_Element[i] = other.m_Element[i];
		}
	}

	return *this;
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