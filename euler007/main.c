#include <stdbool.h>
#include <stdio.h>
#include <math.h>

#define MAX 10000

int PRIMES[MAX];

bool is_prime(unsigned long long x)
{
    if (x == 1)
        return false;
    if (x == 2)
        return true;
    unsigned long long sqrtx = sqrt(x);
    for (unsigned long long i = 2; i <= sqrtx; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    int n = 2;
    for (int i = 0; i < MAX; n++)
    {
        if (is_prime(n))
        {
            PRIMES[i++] = n;
        }
    }

    unsigned int T, N;
    scanf("%u", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%u", &N);
        printf("%lu\n", PRIMES[N-1]);
    }
    return 0;
}
