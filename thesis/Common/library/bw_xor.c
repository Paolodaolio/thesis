#include "bw_xor.h"

unsigned int bw_xor(int w1, int w2)
{
    i = len(w1)
    if (len(w2)!=i)
    {
        return -1;
    }
    else
    {
        return w1^w2;
    }
}