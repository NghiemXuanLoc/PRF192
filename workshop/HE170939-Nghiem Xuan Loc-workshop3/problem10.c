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
    printf("chu so nho nhat cua n = %d\nchu so lon nhat cua n = %d\n", min_val, max_val);
}

int main()
{
    int n;
    do
    {
        printf("nhap vao gia tri cua n: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("gia tri nhap vao khong hop le(n >= 0)\n");
        }

    } while (n < 0);
    mimax(n);
    return 0;
}