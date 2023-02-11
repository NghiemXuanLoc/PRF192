#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main()
{
    double num1, num2;
    char op;
    
    scanf("%lf%c%lf", &num1, &op, &num2);

    if (op == '*')
    {
        printf("ket qua cua phep nhan la: %.2lf\n", num1 * num2);
    }
    else if (op == '+')
    {
        printf("ket qua cua phep cong la: %.2lf\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("ket qua cua phep tru la: %.2lf\n", num1 - num2);
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            printf("divide by 0\n");
        }
        else
            printf("ket qua cua phep chia la: %.2lf\n", num1 / num2);
    }
    else
        printf("Op is not supported");

    return 0;
}