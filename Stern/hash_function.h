# include "sha3.h"

// hash fucntion used should be SHA3
// check funtion is meant to be used in the case the input would be too big for the SHA3 
// and it would need to be divided in chunks

int hash(int input);

int chunck(int input);