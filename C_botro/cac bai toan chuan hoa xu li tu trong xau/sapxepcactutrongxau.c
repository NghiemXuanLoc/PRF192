#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

void sx(char a[][50], int n){
	for(int i = 0;i < n;i++){
		int min = i;
		for(int j = i + 1;j < n;j++){
			if(strcmp(a[j], a[min]) < 0) min = j;
		}
		char temp[100];
		strcpy(temp, a[min]);
		strcpy(a[min], a[i]);
		strcpy(a[i], temp);
	}
}

// -1 neu muon a dung truoc b (return -1)
// 1 neu muon a dung sau b (return 1)

int cmp(const void *a, const void *b){
	char *x = (char *)a;
	char *y = (char *)b;
	return strcmp(x, y);
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1005];
		gets(c);
		char a[20][50];
		int n = 0;
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n], token);
			n++;
			token = strtok(NULL, " ");
		}
//		sx(a, n, sizeof(a[0]), cmp);
		
		qsort(a, n, sizeof(a[0]), cmp);
		
		for(int i = 0;i < n; i++){
			printf("%s ", a[i]);
		}
		printf("\n");
	}

	return 0;
}

