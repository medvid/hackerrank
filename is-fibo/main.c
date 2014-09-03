#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NMAX 10000000000
// F[FMAX] > NMAX
#define FMAX 50

unsigned long long F[FMAX + 1];

bool IsFibo(unsigned long long n)
{
    for (unsigned int j = 0; j < FMAX; j++)
    {
        if (n == F[j])
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char *argv[])
{
    unsigned int T;
    unsigned long long N;

    F[0] = 0;
    F[1] = 1;
    for (unsigned int i = 2; ; i++)
    {
        F[i] = F[i-1] + F[i-2];
        if (F[i] > NMAX)
        {
            /*printf("FMAX = %u\n", i);*/
            break;
        }
    }

    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%llu", &N);
        printf("%s\n", IsFibo(N) ? "IsFibo" : "IsNotFibo");
    }
    return 0;
}
