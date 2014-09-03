#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NMAX 60

int main(int argc, char *argv[])
{
    unsigned int i, T, N;
    unsigned long C[NMAX+2];

    C[0] = 1;
    for (i = 0; i <= NMAX/2; i++)
    {
        C[2 * i + 1] = C[2 * i] * 2;
        C[2 * i + 2] = C[2 * i + 1] + 1;
    }

    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%u", &N);
        printf("%lu\n", C[N]);
    }
    return 0;
}
