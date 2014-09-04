#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NMAX 100000

int W[NMAX];

int main(int argc, char *argv[])
{
    int T, N, X, Y;
    scanf("%i %i", &N, &T);

    for (int i = 0; i < N; i++)
    {
        scanf("%i", &W[i]);
    }
    for (int i = 0; i < T; i++)
    {
        scanf("%i %i", &X, &Y);
        int min = 3;
        for (int j = X; j <= Y; j++)
        {
            if (W[j] < min)
                min = W[j];
        }
        printf("%i\n", min);
    }
    return 0;
}
