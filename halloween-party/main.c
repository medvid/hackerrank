#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    unsigned int T;
    unsigned long N, R;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%lu", &N);
        R = (N % 2) ? ((N/2)*(N/2+1)) : (N*N/4);
        printf("%lu\n", R);
    }
    return 0;
}
