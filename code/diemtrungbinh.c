#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    float toan, ly, hoa;
    printf("nhap vao diem toan ly hoa lan luot la: ");
    scanf("%f%f%f", &toan, &ly, &hoa);
    if (toan < 0 || toan > 10 || ly < 0 || ly > 10 || hoa < 0 || hoa > 10)
    {
        printf("diem so nhap vao khong hop le, exit\n");
    }
    else
    {
        float tb = (toan + ly + hoa) / 3;
        if (tb < 5.0)
        {
            printf("trung binh\n");
        }
        else if (tb < 7.0)
        {
            printf("tot\n");
        }
        else if (tb < 8.0)
        {
            printf("rat tot\n");
        }
        else
            printf("xuat sac\n");
    }
    
    return 0;
}