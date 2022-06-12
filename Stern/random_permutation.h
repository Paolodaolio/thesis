#pragma once
#include <stdio.h>
#include "djbsort.h"
#include "rng.h"

// radom_array is obtaied by the rng, the output array is shuffled based on random_array's order
// the length of the permutation is based on len(random_array)

int output_permutation(int random_array);

int sort(int index, int array);

int apply_permutation(int permutation, int array);
