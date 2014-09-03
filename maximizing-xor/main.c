#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    unsigned int xor, max = 0;
    unsigned int L, R;

    scanf("%u", &L);
    scanf("%u", &R);
    for (unsigned int A = L; A <= R; A++)
    {
        for (unsigned int B = A; B <= R; B++)
        {
            xor = A ^ B;
            if (xor > max)
                max = xor;
        }
    }
    printf("%u\n", max);
    return 0;
}
