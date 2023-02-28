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
		char a[30][70];
		int n = 0;
		char *token = strtok(c, " ");
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		int ok = 1;
		for(int i = 0;i < n;i++){
			for(int j = 0;j <= i - 1;j++){
				if(strcmp(a[i], a[j]) == 0){
					ok = 0;
					printf("%s\n", a[i]);
					break;
				}
			}
			if(ok == 0) break;
		}
		
		if(ok) printf("-1\n");
	}

	return 0;
}

