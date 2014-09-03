#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NMAX 10000

int main(int argc, char *argv[])
{
    unsigned int T;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        char s[NMAX+1];
        scanf("%s", &s);
        int l = strlen(s);
        int r = 0;
        for (int j = 0; j < l/2; j++)
        {
            int d = s[j] - s[l - j - 1];
            if (d < 0) d = -d;
            r += d;
        }
        printf("%i\n", r);
    }
    return 0;
}
