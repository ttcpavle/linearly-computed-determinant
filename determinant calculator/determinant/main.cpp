#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include "permutations.h"
#include "matrix.h"

using namespace std;

int main() {
    // Create random matrix and print it
    Matrix mat(4);
    mat.randomize();
    mat.print();

    // Calculate determinant
    int det;
    auto start = chrono::high_resolution_clock::now();
    //det = mat.det();  
    for (int i = 0; i < 1000; i++) {
        det = mat.det();
    }
    auto end = chrono::high_resolution_clock::now();

    // Results
    auto totalTime1 = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    auto totalTime2 = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << "\nDeterminant is: " << det << endl << endl;
    cout << "Total computation time: " << totalTime1 << " nanoseconds" << endl;
    cout << "Total computation time: " << totalTime2 << " microseconds" << endl;
    return 0;
}