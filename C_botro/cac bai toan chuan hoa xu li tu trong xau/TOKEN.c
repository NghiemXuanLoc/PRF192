#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	char c[1005];
	gets(c);
	char *token = strtok(c, " ");
	while(token != NULL){
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return 0;
}

