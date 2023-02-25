#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}

int main(){
	char c[1005];
	gets(c);
	strlwr(c);
	char a[100][100];

	char	*token = strtok(c, " ");
	int n = 0;
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	
	qsort(a, n, sizeof(a[0]), cmp);
	
	int b[n];
	for(int i = 0;i < n;i++){
		b[i] = 0;
	}
	int cnt = 1;
	for(int i =0;i < n - 1;i++){
		if(strcmp(a[i], a[i+1]) == 0) {
			cnt++;
		}else {
			printf("%s %d\n", a[i], cnt);
			cnt = 1;
		}
	}
	if(strcmp(a[n - 2], a[n - 1]) != 0) printf("%s %d\n", a[n - 1], 1);
	else printf("%s %d\n", a[n - 1], cnt);
	

	return 0;
}

