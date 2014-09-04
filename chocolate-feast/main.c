#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    unsigned int T, N, C, M, R, r, m;
    scanf("%u", &T);
    for (unsigned int i = 0; i < T; i++) {
        scanf("%u %u %u", &N, &C, &M);
        R = 0;
        m = 0;
        do {
            r = N / C;
            N %= C;
            m += r;
            if (m >= M)
            {
                r += m / M;
                m = m % M + m / M;
            }
            R += r;
        } while (r > 0);
        printf("%u\n", R);
    }
    return 0;
}
