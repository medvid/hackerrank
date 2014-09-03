#include <stdio.h>

// MADNESS

unsigned long long S[] = {
    (unsigned long long)1,
    (unsigned long long)1,
    (unsigned long long)2,
    (unsigned long long)2 * 3,
    (unsigned long long)2 * 2 * 3,
    (unsigned long long)2 * 2 * 3 * 5,
    (unsigned long long)2 * 2 * 3 * 5,
    (unsigned long long)2 * 2 * 3 * 5 * 7,
    (unsigned long long)2 * 2 * 2 * 3 * 5 * 7,
    (unsigned long long)2 * 2 * 2 * 3 * 3 * 5 * 7,
    (unsigned long long)2 * 2 * 2 * 3 * 3 * 5 * 7,
    (unsigned long long)2 * 2 * 2 * 3 * 3 * 5 * 7 * 11,
    (unsigned long long)2 * 2 * 2 * 3 * 3 * 5 * 7 * 11,
    (unsigned long long)2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13,
    (unsigned long long)2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13,
    (unsigned long long)2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19 * 23,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19 * 23,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29,
    (unsigned long long)2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31,
    (unsigned long long)2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31,
    (unsigned long long)2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31,
    (unsigned long long)2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31,
    (unsigned long long)2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31,
    (unsigned long long)2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31,
    (unsigned long long)2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37,
    (unsigned long long)2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37,
    (unsigned long long)2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37 * 39,
    (unsigned long long)2 * 2 * 2 * 2 * 2 * 3 * 3 * 3 * 5 * 5 * 7 * 11 * 13 * 17 * 19 * 23 * 29 * 31 * 37 * 39,
};

int main(int argc, char *argv[])
{
    int T, N;
    scanf("%i", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%u", &N);
        printf("%llu\n", S[N]);
    }
    return 0;
}
