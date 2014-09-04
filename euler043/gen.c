#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NMAX 1000000000

int P[]={1,2,3,5,7,11,13,17};
unsigned long NZ[]={1, 10, 100, 1000,10000,100000,1000000,10000000,100000000,1000000000,10000000000};

bool is_uniq(char *s, int l)
{
    for (int i = 0; i <= l; i++)
    {
        if (s[i] > l)
            return false;
        for (int j = i + 1; j <= l; j++)
        {
            if (s[i] == s[j])
            {
                return false;
            }
        }
    }
    return true;
}

bool is_pandigital(char *s, int l)
{
    if (!is_uniq(s, l))
        return false;
    for (l-=2; l >= 1; l--)
    {
        int m = 100 * s[l] + 10 * s[l + 1] + s[l + 2];
        if (m % P[l] != 0)
            return false;
    }
    return true;
}

void my_sprintf(char *s, int n, int l)
{
    for (int i = 0; i <= l; i++)
    {
        s[l - i] = n % 10;
        n /= 10;
    }
}

int main(int argc, char *argv[])
{
    unsigned int N;
    unsigned long R = 0;
    scanf("%u", &N);
    for (unsigned long n = 0; n < NZ[N+1]; n++)
    {
        char s[10];
        my_sprintf(s, n, N);
        if (is_pandigital(s, N))
        {
            R += n;
        }
    }
    printf("%lu\n", R);
    return 0;
}
