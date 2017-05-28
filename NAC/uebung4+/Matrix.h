#pragma once

class Matrix
{
private:
	static int counter;

protected:
	int m_Zeilen;
	int m_Spalten;
	float *m_Element;

public:
	Matrix(int m, int n);
	Matrix(const Matrix &other);
	virtual ~Matrix(); 

	Matrix& operator=(const Matrix &other);

	static int getCounter();

	virtual void ausgabe() const;
};