# Overview
This C++ project computes the determinant of an nxn matrix using the Leibniz permutation formula.

![Screenshot 2024-03-22 212829](https://github.com/ttcpavle/Determinant-calculator-with-permutations/assets/159661698/5a92c367-51e3-4607-b58c-219ea2ebbd36=350x350)

 Unlike traditional implementations that generate permutations at runtime (which would result in O(n!) complexity), this project precomputes all permutations and their signs, storing them in a file for O(n) lookup during computation.

While this approach appears to have linear time complexity, it comes at the cost of massive memory usage for larger matrices due to the storage of all permutations. In practice, algorithms like LU decomposition or Gaussian elimination (with O(n^3) complexity) are more efficient for larger matrices.

This project serves as an educational demonstration of:

1) The Leibniz formula for determinants
2) The trade-off between time and space complexity
3) The impracticality of factorial-time algorithms for large inputs

### Key Features
- Precomputed Permutations - All permutations (with correct signs) are stored in permutations.cpp
- Flexible Matrix Input - Supports any nxn matrix (though practical limits apply due to permutation storage)
- Educational Focus - Demonstrates why O(n!) algorithms are avoided in real-world applications

### Performance Considerations
Space Complexity Explosion - Storing all permutations requires O(n!) space, making this method impractical for n > 10.

Alternative Algorithms - For real-world use, consider:

- Hardcoded formulas for small matrices (n<=5)
- LU decomposition or Gaussian elimination (O(n^3))
- Strassen or Coppersmith-Winograd for very large matrices

Can this program be further improved? Yes. This method of calculating determinants can be parallelized using multithreading or GPU computing

Important note: permutations in permutations.cpp are the output of another program in which i used a specific permtutation algorithm so that sign of permutation is preserved (which is crucial for this to work). You can find it here: https://stackoverflow.com/questions/7537791/understanding-recursion-to-generate-permutations 

### How to Run
**Windows**
Open the project in Visual Studio and compile/run.

**Linux/macOS**
```bash
g++ -o determinant main.cpp matrix.cpp permutations.cpp ./determinant
```
