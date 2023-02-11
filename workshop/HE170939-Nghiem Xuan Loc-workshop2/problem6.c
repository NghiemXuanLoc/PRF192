#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    for (int i = 0; i < 256; i++)
    {
        printf("%c: %d, %o, %X\n", i, i, i, i);
        if (i != 0 && i % 20 == 0)
        {
            getchar();
        }
    }

    return 0;
}
