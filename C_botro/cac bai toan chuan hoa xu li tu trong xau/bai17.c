#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// tap tu rieng cua 2 xau ki tu

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}

int main(){
	char xau1[1005], xau2[1005];
	gets(xau1);
	gets(xau2);
	int n = 0;
	char a[30][100];
	char *token = strtok(xau1, " ");
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	
	int b[n];
	for(int i = 0;i < n;i++){
		b[i] = 1;
	}
	qsort(a, n, sizeof(a[0]), cmp);
	char *tokenn = strtok(xau2, " ");
	while(tokenn != NULL){
		for(int i = 0;i < n;i++){
			if(strcmp(tokenn, a[i]) == 0){
				b[i] = 0;
			}
		}
		tokenn = strtok(NULL, " ");
	}

	for(int i = 0;i < n - 1;i++){
		for(int j = i + 1;j < n;j++){
			if(strcmp(a[i], a[j]) == 0){
				b[j] = 0;
			}
		}
	}
	
	for(int i = 0;i < n;i++){
		if(b[i]){
			printf("%s ", a[i]);
		}

	}
	return 0;
}

