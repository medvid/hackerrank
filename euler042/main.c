#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static unsigned long M;

static inline unsigned long triangulate(unsigned long x)
{
    return (x + 1) * x / 2;
}

static inline unsigned long detriangulate(unsigned long x)
{
    return (M = sqrt(2 * x));
}

static inline bool is_triangular(unsigned long long x)
{
    return triangulate(detriangulate(x)) == x;
}

int main(int argc, char *argv[])
{
    unsigned int T;
    unsigned long N;

    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%lu", &N);
        if (is_triangular(N))
        {
            printf("%lu\n", M);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
