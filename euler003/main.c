#include <stdbool.h>
#include <stdio.h>
#include <math.h>

unsigned long long next_prime_factor(unsigned long long x, unsigned long long p)
{
    for (unsigned long long sqrtx = sqrt(x); p <= sqrtx; p++)
    {
        if (x % p == 0)
        {
            return p;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    unsigned int T;
    unsigned long long N;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%llu", &N);
        unsigned long long p = 2;
        while ((p = next_prime_factor(N, p)) > 0)
        {
            N = N / p;
        }
        printf("%llu\n", N);
    }
    return 0;
}
