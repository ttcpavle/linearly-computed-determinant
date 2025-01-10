#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
	float** m;
	int size;
public:
	Matrix(int size);
	void randomize();
	int det();
	void print();
};

#endif