#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	return *x - *y;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1005];
		scanf("%s", c);
		qsort(c, strlen(c), sizeof(char), cmp);
		printf("%s\n", c);
	}

	return 0;
}

