#include <math.h>
#include '../../../LEDAcrypt/Optimized_Implementation/Common/include/H_Q_matrices_generation.h'

// we extract a random matrix from AES DRBG from LEDA and we check if it is singular

int extract_matrix(int n_ones);

// to check if it is singular we computer the gaussian elimination checking if it is full rank

bool is_singular(int matrix);

// the extraction of a singular matrix is about 1/4, once we have it, we can output it

int output_singular_matrix(int matrix);
