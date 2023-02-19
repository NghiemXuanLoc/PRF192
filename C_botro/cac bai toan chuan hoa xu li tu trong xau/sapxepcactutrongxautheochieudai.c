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
	if(strlen(x) != strlen(y)) return strlen(x) - strlen(y);
	else return strcmp(x, y);
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1005];
		gets(c);
		char a[20][50];
		
		char *token = strtok(c, " ");
		int n = 0;
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		qsort(a, n, sizeof(a[0]), cmp);
		
		for(int i = 0;i < n;i++){
			printf("%s ", a[i]);
		}

	}

	return 0;
}

