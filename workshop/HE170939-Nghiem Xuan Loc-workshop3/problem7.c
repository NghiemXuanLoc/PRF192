#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int sum(int n)
{
    int temp = 0;
    int s = 0;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main()
{
    int n;
    do
    {
        printf("nhap gia tri cua n: ");
        scanf("%d", &n);
        if (n >= 0)
        {
            printf("tong cac chu so cua n = %d\n", sum(n));
        }
        else
            printf("gia tri nhap vao khong hop le(n >= 0)\n");

    } while (n >= 0);

    return 0;
}