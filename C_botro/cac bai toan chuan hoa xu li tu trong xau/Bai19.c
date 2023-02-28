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
		char c[1005], a[105];
		gets(c);
		gets(a);
		strlwr(a);
		char *token = strtok(c, " ");
		while(token != NULL){
			char *ans = token;
			strlwr(ans);
			if(strcmp(a, ans) != 0) printf("%s ", token);
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
	return 0;
}

