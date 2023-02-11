#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    ll thunhap, mienthue, chiuthue, chiuthue2;
    double thuethunhap = 0;
    int n; // so nguoi phu thuoc
    int pa = 11000000, pd = 4400000;

    printf("Your income of this year: ");
    scanf("%lld", &thunhap);
    printf("Number of dependent: ");
    scanf("%d", &n);

    mienthue = 12 * (pa + (ll)n * pd);

    chiuthue = thunhap - mienthue;
    chiuthue2 = chiuthue;

    if (chiuthue <= 0)
    {
        chiuthue2 = 0;
        chiuthue = 0;
    }

    // tinh so thue phai chiu

    int temp = 1;       // khoi tao bien temp dai dien cho cac cap do thue tu 1 toi 6
    ll level[10] = {0}; // khoi tao mang "level" luu so tien cua moi cap do tu 1 toi 6

    int thue[10] = {0, 5000000, 5000000, 8000000, 14000000, 20000000};
    // khoi tao mang "thue" luu khoang cach so tien giua cac cap do tu 1 toi 6

    while (chiuthue >= 0 && temp < 6)
    {
        level[temp] = thue[temp];
        chiuthue -= thue[temp];
        temp++;
    }

    if (chiuthue < 0)
    {
        level[temp - 1] += chiuthue;
    }

    if (temp == 6)
    {
        level[temp] = chiuthue;
    }

    int ans = 5; // khoi tao bien ans de tinh % thue cua moi cap do, bat dau tu cap do 1 = (5%)
  
    for (int i = 1; i <= 6; i++)
    {
        double res;
        if (level[i] < 0)
        {
            level[i] = 0;
        }
        res = (double)level[i] * ans / 100;

        thuethunhap += res;
        ans += 5; // tang moi level len 5%
    }

    printf("Tax-free income: %lld\n", mienthue);
    printf("Taxable income: %lld\n", chiuthue2);
    printf("Income tax: %.2lf\n", thuethunhap);
    return 0;
}
