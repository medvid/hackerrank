#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int T, N;
    unsigned long x3, x5, x15;
    unsigned long fizzbuzz;
    scanf("%u", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%u", &N);
        x3 = (N - 1)/3;
        x3 = 3 * x3 * (x3 + 1) / 2;
        x5 = (N - 1)/5;
        x5 = 5 * x5 * (x5 + 1) / 2;
        x15 = (N - 1)/15;
        x15 = 15 * x15 * (x15 + 1) / 2;
        fizzbuzz = x3 + x5 - x15;
        printf("%lu\n", fizzbuzz);
    }
    return 0;
}
