#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// them 1 so vao mang co san
void addValue(int a[], int *n)
{
	int temp;
	printf("Enter the value you want to add to the array: ");
	scanf("%d", &temp);
	printf("\n\n");
	a[*n] = temp;
	(*n)++;
}

// tim kiem 1 phan tu trong mang
void searchValue(int a[], int n)
{
	printf("Enter the value you want to search on the screen: ");
	int x, temp = 0;
	scanf("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			temp++;
		}
	}
	if (temp)
		printf("\nthe number of elements %d that exist in the array is %d\n\n", x, temp);
	else
		printf("\nelement not in array\n\n");
}

// in mang
void printArray(int a[], int n)
{
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n\n");
}

void printRange(int a[], int n)
{
	printf("input 2 values min_val and max_val: ");
	int min_val, max_val;
	scanf("%d%d", &min_val, &max_val);
	printf("\n");
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= min_val && a[i] <= max_val)
			printf("%d ", a[i]);
	}
	printf("\n\n");
}

int cmp(const void *a, const void *b)
{
	int *x = (int *)a;
	int *y = (int *)b;
	return *x - *y;
}
// in mang theo thu tu tang dan, giu nguyen vi tri ban dau;
void arrayOder(int a[], int n)
{
	int b[n];
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	qsort(b, n, sizeof(int), cmp);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n\n");
}
int main()
{
	int a[105];
	int n = 0;
	char x;
	do
	{
		printf("-----------------\n");
		printf("      MENU\n");
		printf("-----------------\n");
		printf("1- Add  a value\n");
		printf("2- Search a value\n");
		printf("3- Print out the array\n");
		printf("4- Print out values in a range\n");
		printf("5- Print out the array in ascending order\n");
		printf("Others-Quit\n\n");
		printf("enter your selection: ");
		scanf("%c", &x);
		switch (x)
		{
		case '1':
			addValue(a, &n);
			break;
		case '2':
			searchValue(a, n);
			break;
		case '3':
			printArray(a, n);
			break;
		case '4':
			printRange(a, n);
			break;
		case '5':
			arrayOder(a, n);
			break;
		}
		getchar();
	} while (x > '0' && x < '6');

	return 0;
}
