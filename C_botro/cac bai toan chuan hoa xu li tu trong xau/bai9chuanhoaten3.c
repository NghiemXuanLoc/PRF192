#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

void chuanHoaTen(char c[]){
	c[0] = toupper(c[0]);
	for(int i = 1;i < strlen(c);i++){
		c[i] = tolower(c[i]);
	}
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
		
		strupr(a[n-1]);
		printf("%s, ", a[n - 1]);
		for(int i = 0;i < n - 1;i++){
			chuanHoaTen(a[i]);
			printf("%s ", a[i]);
		}
		printf("\n");
	}

	return 0;
}

