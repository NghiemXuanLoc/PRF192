#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    int a[5], temp = -1;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0 && a[i] > temp)
        {
            temp = a[i];
        }
    }
    printf("%d\n", temp);

    return 0;
}
