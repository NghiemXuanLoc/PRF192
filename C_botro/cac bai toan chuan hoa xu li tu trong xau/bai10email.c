#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1005];
		gets(c);
		strlwr(c);
		char a[20][100];
		int n = 0;
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		printf("%s", a[n-1]);
		for(int i = 0;i < n - 1;i++){
			printf("%c", a[i][0]);
		}	
		printf("@gmail.com\n");
		
	}

	return 0;
}

