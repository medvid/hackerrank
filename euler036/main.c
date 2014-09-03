#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

bool is_palindrome_10(int x)
{
    char s[8];
    sprintf(s, "%d", x);
    int sl = strlen(s);
    for (int i = 0; i < sl/2; i++)
    {
        if (s[i] != s[sl - i - 1])
            return false;
    }
    return true;
}

bool is_palindrome_k(int x, int k)
{
    int i, j;
    int y = x;
    char s[20];
    int sl = strlen(s);
    for (i = 0; x > 0; i++)
    {
        s[i] = (x % k);
        x /= k;
    }
    for (j = 0; j < i/2; j++)
    {
        if (s[j] != s[i - j - 1])
            return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    unsigned int N, K, R = 0;
    scanf("%u %u", &N, &K);
    for (unsigned int i = 1; i < N; i++)
    {
        if (is_palindrome_10(i) && is_palindrome_k(i, K))
        {
            R += i;
        }
    }
    printf("%u\n", R);
    return 0;
}
