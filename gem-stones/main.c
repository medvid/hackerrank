#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SMAX 100
#define NMAX 100

void sort(char *s, int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] > s[j])
            {
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    unsigned int N, R = 0;
    char s[SMAX + 1];
    int l[NMAX];
    char *k[NMAX];

    scanf("%u", &N);
    for (unsigned int i = 0; i < N; i++)
    {
        scanf("%s", &s);
        l[i] = strlen(s);
        k[i] = malloc(l[i] + 1);
        strncpy(k[i], s, l[i]);
        sort(k[i], l[i]);
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        bool haz = true;
        for (unsigned int i = 0; i < N; i++)
        {
            if (*k[i] == c)
            {
                while (*k[i] == c)
                    k[i]++;
            }
            else
            {
                haz = false;
                break;
            }
        }
        if (haz) {
            R++;
        }
    }
    printf("%i\n", R);
    return 0;
}
