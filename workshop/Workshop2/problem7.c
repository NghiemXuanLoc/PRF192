#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    char c1, c2;
    printf("ki tu thu nhat la: ");
    scanf("%c", &c1);
    getchar();
    printf("ki tu thu hai la: ");
    scanf("%c", &c2);
    if (c1 > c2)
    {
        char t = c1;
        c1 = c2;
        c2 = t;
    }
    int d = c2 - c1;
    printf("d = %d\n", d);
    for (int i = c1; i <= c2; i++)
    {
        printf("%c : %d, %o, %X\n", i, i, i, i);
    }

    return 0;
}