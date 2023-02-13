#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// ham kiem tra nam nhuan

int checkdate(int a, int b, int c)
{
    //	a la ngay, b la thang, c la nam

    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
    {
        if (a >= 1 && a <= 31)
        {
            return 1;
        }
    }
    else if (b == 4 || b == 6 || b == 9 || b == 11)
    {
        if (a >= 1 && a <= 30)
        {
            return 1;
        }
    }
    else if ((c % 4 == 0 && c % 400 != 0) || (c % 400 == 0))
    {
        if (a >= 1 && a <= 29)
        {
            return 1;
        }
    }
    else if (a >= 1 && a <= 28)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int x;
    do
    {
        printf("   MENU\n==========\n");
        printf("1- Processing date data\n");
        printf("2- Character data\n");
        printf("3- Quit");
        printf("enter into your choice = ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            int a, b, c;
            if (check(a, b, c))
                printf("valid data\n");
            else
                printf("Invalid data\n");
            break;
        case 2:
            
        default:
            printf("Your selection is not valid\n");
            break;
        }

    } while (x != 3);

    return 0;
}
