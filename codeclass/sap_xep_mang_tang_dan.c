#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// sap xep mang theo thu tu tang dan, in cac so chan ra man hinh

int cmp(const void *a, const void *b){
	int *x = (int *)a;
	int *y = (int *)b;
	return *x - *y;
}

int main(){
	int a[5];
	for(int i = 0;i < 5;i++){
		scanf("%d", a + i);
	}
	
	qsort(a, 5, sizeof(5), cmp);
	
	for(int i = 0;i < 5;i++){
		if(a[i] % 2 == 0) printf("%d\n", a[i]);
	}
	return 0;
}

