#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 1000000

bool ISPRIME[MAX+1];

bool is_prime(int x)
{
    if (x == 1)
        return false;
    if (x == 2)
        return true;
    int sqrtx = sqrt(x);
    for (int i = 2; i <= sqrtx; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

static inline bool is_prime_lut(int x)
{
    return ISPRIME[x];
}

void circulate_s(char *s, int sl)
{
    char c = s[0];
    for (int i = 0; i < sl - 1; i++)
    {
        s[i] = s[i+1];
    }
    s[sl - 1] = c;
}

bool is_circular_prime(int x)
{
    char s[7];
    if (!is_prime_lut(x))
    {
        return false;
    }
    if ((x == 2) || (x == 5))
    {
        return true;
    }
    sprintf(s, "%d", x);
    int sl = strlen(s);
    for (int i = 0; i < sl; i++)
    {
        if ((s[i] % 2 == 0) || (s[i] == 5))
            return false;
    }
    for (int i = 0; i < sl - 1; i++)
    {
        circulate_s(s, sl);
        int y = atoi(s);
        if (!is_prime_lut(y))
            return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    for (int i = 2; i <= MAX; i++)
    {
        if (is_prime(i))
        {
            ISPRIME[i] = 1;
        }
    }

    unsigned int N;
    unsigned int sum = 0;
    scanf("%u", &N);
    for (int i = 2; i < N; i++)
    {
        if (is_circular_prime(i))
        {
            /*printf("%u\n", i);*/
            sum += i;
        }
    }
    printf("%u\n", sum);
    return 0;
}
