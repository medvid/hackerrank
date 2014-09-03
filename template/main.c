#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    unsigned int T, N, R;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%u", &N);
        R = N;
        printf("%u\n", R);
    }
    return 0;
}
