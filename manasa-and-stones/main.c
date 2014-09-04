#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    unsigned int T, R, n, a, b;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%u", &n);
        scanf("%u", &a);
        scanf("%u", &b);
        if (a == b)
        {
            printf("%u\n", (n - 1 )* a);
            continue;
        }
        if (a > b)
        {
            a ^= b;
            b ^= a;
            a ^= b;
        }
        for (unsigned int j = 0; j < n; j++)
        {
            R = j * b + (n - 1 - j) * a;
            printf("%u", R);
            if (j < n - 1)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
