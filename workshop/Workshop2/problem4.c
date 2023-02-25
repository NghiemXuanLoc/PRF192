#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    // cach so 1 dung while

    // int x, y, temp;
    // int cnt = 1;
    // while (scanf("%d%d", &x, &y) && x != 0 && y != 0)
    // {
    //     temp = x;
    //     x = y;
    //     y = temp;
    //     printf("gia tri sau khi hoan doi:\nx = %d\ny = %d\n", x, y);
    // }
    // temp = x;
    // x = y;
    // y = temp;
    // printf("gia tri sau khi hoan doi:\nx = %d\ny = %d\n", x, y);

    // cach so 2 dung do while

    int x, y;
    do
    {
        printf("nhap vao man hinh gia tri cua x va y: ");
        scanf("%d%d", &x, &y);
        int temp = x;
        x = y;
        y = temp;
        printf("gia tri sau khi hoan doi:\nx = %d\ny = %d\n", x, y);

    } while (x != 0 && y != 0);

    return 0;
}