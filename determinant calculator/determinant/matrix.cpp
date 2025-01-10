#include "matrix.h"
#include "permutations.h"
#include <cstdlib>
#include <iostream>

static const uint8_t* permutations[] = { p2, p3, p4, p5, p6, p7 }; // pointers to permutations
static const int factorials[6] = { 2, 6, 24, 120, 720, 5040 }; // pre-computed factorials

Matrix::Matrix(int size) {
	this->size = size;
	m = new float* [size];
	for (int i = 0; i < size; i++) {
		m[i] = new float[size] {};
	}
}
void Matrix::randomize() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			m[i][j] = rand() % 10;
		}
	}
}

void Matrix::print() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cout << m[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

// Function to calculate determinant in O(n) time complexity. Cons of using this functoin is the need to have all
// permutations of n-dimensional array stored as constants (or in files) along with sign of permutation
int Matrix::det() {

	if (size < 2 || size > 7) {
		std::cout << "No determinant supported for matrix size of: " + size << std::endl;
		return -1;
	}

	// INITIALIZE VARIABLES:
	int pRows = factorials[size - 2]; // total number of rows in permutations
	int sum = 0; // final determinant sum
	int j = 1; // column in matrix and permutation
	int x = 1; // elements of sum
	const uint8_t* permutation_group = permutations[size - 2]; // pointer to permutations accoring to matrix size
	int sign = (permutation_group[0]) ? 1 : -1; // read first sign
	
	// CALCULATE DETERMINANT:
	// for every permutation (row) calculate sum element x and add it to total sum, than read sign for next x and repeat
	for (int i = 1; i < pRows * (size + 1); i++) {
		x *= m[j - 1][(int)(permutation_group[i] - 1)];
		j++;
		if (j == size + 1) {
			sum += sign * x;
			i++;
			sign = (permutation_group[i]) ? 1 : -1;
			x = 1;
			j = 1;
		}
	}
	return sum;
}

