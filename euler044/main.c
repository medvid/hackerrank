#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static inline unsigned long long pentagonize(unsigned long long x)
{
    return (3 * x - 1) * x / 2;
}

static inline unsigned long long depentagonize(unsigned long long x)
{
    return sqrt(2 * x/3) + 1;
}

static inline bool good(unsigned long long x)
{
    return pentagonize(depentagonize(x)) == x;
}

int main(int argc, char *argv[])
{
    unsigned long long k, n, N;

    scanf("%llu %llu", &N, &k);
    for (n = k + 1; n <= N; n++)
    {
        unsigned long long pn  = pentagonize(n);
        unsigned long long pnk = pentagonize(n - k);
        if (good(pn - pnk) || good(pn + pnk))
        {
            printf("%llu\n", pn);
        }
    }
}
