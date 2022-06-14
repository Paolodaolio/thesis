#include <math.h>

// we want to create a group with all the permutations of a fixed length N
// dimension for a binary will 2^N, q-ary will be 2^Q

int create_group(int N);

// creaiamo un vettore e creiamo tutte le possibili combinazioni.
// possiamo salvarlo in locale e scartarlo quando serve
// OR possiamo estrarne ogni volta di diverse salvando solo quelle che abbiamo già usato