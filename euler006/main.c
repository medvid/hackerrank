#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int T;
    scanf("%u", &T);
    for (int i = 0; i < T; i++)
    {
        unsigned long long N;
        scanf("%llu", &N);
        unsigned long long A = N * (N + 1) * (2 * N + 1) / 6;
        unsigned long long B = N * (N + 1) / 2;
        printf("%llu\n", B * B - A);
    }
    return 0;
}
