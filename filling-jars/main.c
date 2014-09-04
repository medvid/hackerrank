#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    unsigned long N, M, R = 0, a, b, k;
    scanf("%lu %lu", &N, &M);
    for (unsigned long i = 0; i < M; i++)
    {
        scanf("%lu %lu %lu", &a, &b, &k);
        R += (b - a + 1) * k;
    }
    printf("%lu\n", R / N);
    return 0;
}
