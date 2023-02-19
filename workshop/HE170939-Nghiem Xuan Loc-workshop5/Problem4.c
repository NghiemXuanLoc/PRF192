#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

void quadraticEquation()
{
    double a, b, c;
    printf("input the coefficient a b c of the quadratic equation : ");
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a != 0)
    {
        double delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            printf("given equation has no solution\n\n");
        }
        else if (delta == 0)
        {
            printf("The given equation has a double solution\nx1 = x2 = %.2f\n\n", -b / (2 * a));
        }
        else
        {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            // in nghiem nho hon truoc.
            printf("The given equation has 2 distinct solutions\nx1 = %.2f\nx2 = %.2f\n\n", x1, x2);
        }
    }
    else
    {
        if (b == 0 && c != 0)
        {
            printf("given equation has no solution\n\n");
        }
        else if (b == 0 && c == 0)
        {
            printf("The given equation has infinitely many solutions\n\n");
        }
        else
        {
            printf("The given equation has a unique solution\nx = %.2f\n\n", -c / b);
        }
    }
}

void bankDepositProblem()
{
    ll d;     // so tien gui cua ban than
    double r; // lai suat hang nam
    int n;    // so nam muon gui
    printf("Please enter the amount: ");
    scanf("%lld", &d);
    printf("please enter interest rate and number of years you want to deposit: ");
    scanf("%lf%d", &r, &n);
    double kq = pow(1 + r, n) * d;
    printf("your amount after the above time limit: %.2lf\n\n", kq);
}

int main()
{
    int x;
    do
    {
        printf("   MENU\n==========\n");
        printf("1- Quadratic equation\n");
        printf("2- Bank deposit problem\n");
        printf("3- Quit\n\n");
        printf("enter into your choice = ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            quadraticEquation();
            break;
        case 2:
            bankDepositProblem();
            break;
        }
    } while (x > 0 && x < 3);
    printf("you've exited from the MENU\n");
    return 0;
}
