#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    unsigned int T, R;
    unsigned long N;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++)
    {
        R = 0;
        char s[11];
        scanf("%lu", &N);
        sprintf(s, "%lu", N);
        int l = strlen(s);
        for (int i = 0; i < l; i++)
        {
            char c = s[i] - '0';
            if (c)
                if (N % c == 0)
                    R++;
        }
        printf("%u\n", R);
    }
    return 0;
}
