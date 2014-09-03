#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static bool is_palindrome(int n)
{
    static char s[7];
    sprintf(s, "%d", n);
    int sl = strlen(s);
    if (sl != 6)
        return false;
    for (int i = 0; i < sl/2; i++)
    {
        if (s[i] != s[sl - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main2(int argc, char *argv[])
{
    unsigned int T;
    unsigned long long N;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%llu", &N);
        printf("%llu\n", N);
    }
    return 0;
}

int main(int argc, char *argv[])
{
    for (int i = 100000; i < 1000000; i++)
    {
        if (!is_palindrome(i))
            continue;
        for (int j = 100; j < 1000; j++)
        {
            int k = i / j;
            if ((k >= 100) && (k < 1000) && (k * j == i))
            {
                printf("  %d,\n", i);
                break;
            }
        }
    }
}
