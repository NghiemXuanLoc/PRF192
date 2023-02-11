#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// ham tinh uoc chung lon nhat
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else
        return gcd(b, a % b);
}

// ham tinh boi chung nho nhat cua 2 so a va b

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}
int main()
{
    int a, b;
    do
    {
        printf("nhap vao gia tri cua a va b: ");
        scanf("%d%d", &a, &b);
        if (a <= 0 || b <= 0)
        {
            printf("gia tri nhap vao khong hop le(a > 0 && b > 0)\n");
        }

    } while (a <= 0 || b <= 0);
    printf("uoc chung lon nhat cua a va b = %d\nboi chung nho nhat cua a va b = %d\n", gcd(a, b), lcm(a, b));
    return 0;
}