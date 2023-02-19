#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

void mimax(int n)
{
    int min_val = 100, max_val = -100;
    while (n)
    {
        int temp = n % 10;
        if (min_val > temp)
        {
            min_val = temp;
        }
        if (max_val < temp)
        {
            max_val = temp;
        }
        n /= 10;
    }
    printf("smallest digit of n = %d\nlargest digit of n = %d\n", min_val, max_val);
}

int main()
{
    int n;
    do
    {
        printf("enter the value of n: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Invalid input value(n >= 0)\n");
        }

    } while (n < 0);
    mimax(n);
    return 0;
}
