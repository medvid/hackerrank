#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static inline unsigned long long triangulate(unsigned long long x)
{
    return (x + 1) * x / 2;
}

static inline unsigned long long detriangulate(unsigned long long x)
{
    return sqrt(2 * x);
}

static inline bool is_triangular(unsigned long long x)
{
    return triangulate(detriangulate(x)) == x;
}

static inline unsigned long long pentagonize(unsigned long long x)
{
    return (3 * x - 1) * x / 2;
}

static inline unsigned long long depentagonize(unsigned long long x)
{
    return sqrt(2 * x / 3) + 1;
}

static inline bool is_pentagonal(unsigned long long x)
{
    return pentagonize(depentagonize(x)) == x;
}

static inline unsigned long long hexagonize(unsigned long long x)
{
    return (2 * x - 1) * x;
}

static inline unsigned long long dehexagonize(unsigned long long x)
{
    return sqrt(x / 2) + 1;
}

static inline bool is_hexagonal(unsigned long long x)
{
    return hexagonize(dehexagonize(x)) == x;
}

int main(int argc, char *argv[])
{
    unsigned int a, b;
    unsigned long N;

    scanf("%lu %u %u", &N, &a, &b);
    for (unsigned long n = 1; ; n++)
    {
        if (b == 6)
        {
            unsigned long m = hexagonize(n);
            if (m >= N)
                break;
            if (a == 3)
            {
                if (is_triangular(m))
                    printf("%lu\n", m);
            }
            else
            {
                if (is_pentagonal(m))
                    printf("%lu\n", m);
            }
        }
        else
        {
            unsigned long m = pentagonize(n);
            if (m >= N)
                break;
            if (is_triangular(m))
                printf("%lu\n", m);
        }
    }
}
