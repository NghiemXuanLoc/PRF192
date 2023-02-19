#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int check(char c[]){
	for(int i = 0;i < strlen(c);i++){
		if(!isupper(c[i])) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1005];
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			if(check(token)) printf("%s ", token);
			token = strtok(NULL, " ");
		}
	}

	return 0;
}

