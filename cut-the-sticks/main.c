#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TMAX 1000

int N[TMAX];

void sort(int *s, int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] > s[j])
            {
                int c = s[i];
                s[i] = s[j];
                s[j] = c;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    unsigned int T;
    int *p = N;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        scanf("%u", &p[i]);
    }
    sort(N, T);
    do
    {
        printf("%u\n", T);
        int min = p[0];
        for (unsigned int i = 0; i < T; i++)
        {
            p[i] -= min;
        }
        while ((p[0] == 0) && (T > 0))
        {
            p++;
            T--;
        }
    } while (T > 0);
    return 0;
}
