# What's the idea behind this?
This is a fun project designed to demonstrate calculating determinant of a matrix with linear time complexity. However, that linear complexity is just a facade. Behind it lies a precomputed array of permutations, which consumes an enormous amount of space for larger matrices and involves frequent array accesses. While the efficiency of this implementation is considered to some extent, in practice, it is better to use hard-coded determinant calculations for small matrices and popular algorithms like LU decomposition for larger matrices. This project highlights an interesting property of determinants.

Can this program be further improved? Yes. This method of calculating determinants can be parallelized using multithreading or GPU computing.
Important note: permutations in permutations.cpp are the output of another program in which i used a specific permtutation algorithm so that sign of permutation is preserved (which is crucial for this to work). You can find it here: https://stackoverflow.com/questions/7537791/understanding-recursion-to-generate-permutations .
# How to run
If you are on windows, just open or copy files in new visual studio solution and run. If you are on linux, go to folder with .cpp and .h files and compile the program with g++ or clang (e.g g++ -o program_name main.cpp matrix.cpp permutations.cpp)
