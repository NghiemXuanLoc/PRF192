#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

void chuanHoaTen(char c[][50], int n){
	for(int i = 0;i < n;i++){
		c[i][0] = toupper(c[i][0]);
		for(int j = 1;j < strlen(c[i]);j++){
			c[i][j] = tolower(c[i][j]);
		}
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
		int n = 0;
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		chuanHoaTen(a, n);
		for(int i = 0;i < n;i++){
			printf("%s ", a[i]);
		}
	}

	return 0;
}

