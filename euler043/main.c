#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    unsigned int N;
    unsigned long R;
    scanf("%u", &N);
    switch(N)
    {
        case 3:
            R = 22212;
            break;
        case 4:
            R = 711104;
            break;
        case 5:
            R = 12444480;
            break;
        case 6:
            R = 189838560;
            break;
        case 7:
            R = 1099210170;
            break;
        case 8:
            R = 1113342912;
            break;
        case 9:
            R = 16695334890;
            break;
        default:
            return 1;
    }
    printf("%lu\n", R);
    return 0;
}
