#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    // kieu du lieu cua S la long long boi vi cac so int nhap vao co the rat lon dan den tran so voi S
    ll s = 0;
    int x;

    while (scanf("%d", &x) && x != 0)
    {
        s += x;
    }
    printf("tong cac gia tri nhap vao tu ban phim la: %lld\n", s);
    return 0;
}