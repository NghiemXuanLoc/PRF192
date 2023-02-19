#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// cach 1 su ly xau ki tu

void makeDouble(char c[], int ipart, int fraction)
{
	int n = 0;
	while (fraction)
	{
		c[n++] = (fraction % 10) + '0';
		fraction /= 10;
	}

	c[n++] = '.';

	int temp = ipart;
	if (ipart < 0)
		ipart *= -1;
	while (ipart)
	{
		c[n++] = ipart % 10 + '0';
		ipart /= 10;
	}

	c[n] = '\0';

	strrev(c);
	if (temp < 0)
		printf("-%s", c);
	else
		printf("%s", c);
}

// cach 2 xu ly ham thong thuong

//// ham dem so luong chu so cua Fraction
// int countDigit(int n){
//	int cnt = 0;
//	while(n){
//		cnt++;
//		n /= 10;
//	}
//	return cnt;
// }
//
// void makeDouble(int ipart, int fraction){
//	int cnt = countDigit(fraction);
//	double convertFaraction = (double)fraction/pow(10, cnt);
//	if(ipart < 0) return (double)ipart - convertFaraction;
//	else return (double)ipart + convertFaraction;
//	printf("%lf", makeDouble(ipart, fraction));
// }
int main()
{
	int ipart, fraction;
	printf("please enter ipart: ");
	scanf("%d", &ipart);
	do
	{
		printf("please enter fraction: ");
		scanf("%d", &fraction);
		if (fraction < 0)
			printf("Invalid number entered(fraction > 0)\n");
	} while (fraction < 0);
	char c[50];
	makeDouble(c, ipart, fraction);
	//	makeDouble(ipart, fraction);
	return 0;
}
