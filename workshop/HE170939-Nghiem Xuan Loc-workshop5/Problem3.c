#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// ham kiem tra nam nhuan

int checkleapyear(int n)
{
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
        return 1;
    return 0;
}

int checkdate()
{
    int n, t, nam;
    printf("enter the data in turn day month year : ");
    scanf("%d%d%d", &n, &t, &nam);
    //	n la ngay, t la thang
    if (t >= 1 && t <= 12 && nam >= 0)
    {
        if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12)
        {
            return n <= 31;
        }
        else if (t == 4 || t == 6 || t == 9 || t == 11)
        {
            return n <= 30;
        }
        else if (checkleapyear(nam))
            return n <= 29;
        else
            return n <= 28;
    }
    return 0;
}

void printascii()
{
    printf("enter 2 characters from the keyboard : ");
    char c[5];
    scanf("%s", &c);
    char a = c[0], b = c[1];
    // tim max min giua 2 ki tu a = min, b = max;
    if (a > b)
    {
        char temp = a;
        a = b;
        b = temp;
    }
    for (int i = b; i >= a; i--)
    {
        printf("%c: %d\n", (char)i, i);
    }
    printf("\n");
}

int main()
{
    int x;
    do
    {
        printf("   MENU\n==========\n");
        printf("1- Processing date data\n");
        printf("2- Character data\n");
        printf("3- Quit\n\n");
        printf("enter into your choice = ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            if (checkdate())
                printf("valid data\n\n");
            else
                printf("Invalid data\n\n");
            break;
        case 2:
            printascii();
        }

    } while (x > 0 && x < 3);
    printf("you have exited the program\n");
    return 0;
}
