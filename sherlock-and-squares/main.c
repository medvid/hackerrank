#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

bool is_sqr(unsigned long x)
{
    unsigned long y = sqrt(x);
    return y * y  == x;
}

int main(int argc, char *argv[])
{
    unsigned int T;
    unsigned long A, B, R;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%lu %lu", &A, &B);
        R = (unsigned long)sqrt(B) - (unsigned long)sqrt(A);
        R += is_sqr(A);
        printf("%lu\n", R);
    }
    return 0;
}
