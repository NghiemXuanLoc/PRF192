#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    float a, b, c;
    printf("nhap vao man hinh he so a cua phuong trinh bac 2: ");
    scanf("%f", &a);
    
    if (a == 0)
        printf("no khong phai la phuong trinh bac 2\n");
    else
    {
        printf("nhap he so b c cua phuong trinh bac 2: ");
        scanf("%f%f", &b, &c);

        float delta = b * b - 4 * a * c;
        float x1 = (-b + (float)sqrt(delta)) / (2 * a), x2 =( -b - (float)sqrt(delta) )/ (2 * a);

        if (delta == 0)
            printf("phuong trinh da cho co nghiem kep x1 = x2 = %.2f", -b / (2 * a));
        else if (delta < 0)
            printf("phuong trinh da cho vo nghiem\n");
        else
            printf("phuong trinh da cho co 2 nghiem phan biet:\nx1 = %.2f\x2 = %.2f\n", x1, x2);
    }

    return 0;
}