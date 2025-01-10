# What's the idea behind this?
This is a fun project designed to demonstrate calculating determinant of a matrix with `O(n)` linear time complexity. However, that linear complexity is just a facade. Behind it lies a precomputed array of permutations, which consumes an enormous amount of space for larger matrices and involves frequent array accesses.

While the efficiency of this implementation is considered to some extent, in practice, it is better to use hard-coded determinant calculations for small matrices and popular algorithms like LU decomposition for larger matrices. This project highlights an interesting property of determinant.
This program implements Leibniz formula for determinants which is basically O(n!) if we use permutations on the run. Another algorithm with O(n!) is Laplace expansion. The problem is that n! is very bad time complexity so if we have to compute determinant of larger matrices, we would have to use one of these algorithms: Gaussian Elimination, LU decomposition, Bareiss algorithm and Strassen algorithm, Coppersmith-Winograd's algorithm for very big matrices.

Can this program be further improved? Yes. This method of calculating determinants can be parallelized using multithreading or GPU computing.
Important note: permutations in permutations.cpp are the output of another program in which i used a specific permtutation algorithm so that sign of permutation is preserved (which is crucial for this to work). You can find it here: https://stackoverflow.com/questions/7537791/understanding-recursion-to-generate-permutations .
# How to run
If you are on windows, just open or copy files in new visual studio solution and run. If you are on linux, go to folder with .cpp and .h files and compile the program with g++ or clang (e.g `g++ -o program_name main.cpp matrix.cpp permutations.cpp`)
