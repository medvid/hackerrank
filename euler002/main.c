#include <stdio.h>

#define NMAX 40000000000000000
// F_FMAX > NMAX
#define FMAX 80

int main(int argc, char *argv[])
{
    unsigned int T;
    unsigned long N;
    unsigned long F[FMAX];

    F[0] = 1;
    F[1] = 2;
    for (int i = 2; i < FMAX; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }

    scanf("%u", &T);
    for (int i = 0; i < T; i++)
    {
        unsigned long sum = 0;
        scanf("%lu", &N);
        for (int j = 0; j < FMAX; j++)
        {
            if (F[j] > N)
                break;
            if (F[j] % 2 == 0)
                sum += F[j];
        }
        printf("%lu\n", sum);
    }
    return 0;
}
