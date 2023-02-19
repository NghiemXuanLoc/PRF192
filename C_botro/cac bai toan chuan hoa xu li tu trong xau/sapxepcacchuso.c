#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

	int cmp(const void *a, const void *b){
		int *x = (int*)a;
		int *y = (int*)b;
		if(*x % 2 == 0 && *y % 2 == 1) return -1;
		else if(*x % 2 == 1 && *y % 2 == 0) return 1;
		else if(*x % 2 == 0 && *y % 2 == 0) return *y - *x;
		else return *x - *y;
		
	}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	for(int i = 0;i < n;i++){
		printf("%d ", a[i]);
	}
	return 0;
}

