#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SMAX 100000

char s[SMAX+1];

int main(int argc, char *argv[])
{
    scanf("%s", s);
    int sl = strlen(s);
    int odds = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        int cs = 0;
        for (int i = 0; i < sl; i++)
        {
            if (s[i] == c)
                cs++;
        }
        if (cs % 2 == 1) odds += 1;
        if (odds >= 2)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
