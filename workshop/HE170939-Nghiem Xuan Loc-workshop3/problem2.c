#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int check(int d, int m, int y)
{
    int maxd = 31;
    if (d < 1 || d > 31 || m < 1 || m > 12)
    {
        return 0;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        maxd = 30;
    }
    if (m == 2)
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        {
            maxd = 29;
        }
        else
            maxd = 28;
    }
    return d <= maxd;
}
int main()
{
    int d, m, y;
    printf("nhap vao tu ban phim du lieu cua 1 ngay: ");
    scanf("%d%d%d", &d, &m, &y);
    if (check(d, m, y))
    {
        printf("valid date\n");
    }
    else
        printf("invalid date\n");

    return 0;
}