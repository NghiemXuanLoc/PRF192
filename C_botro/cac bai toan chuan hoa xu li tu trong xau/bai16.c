#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;
 
 // loai bo tu trong 1 xau.
 
int main(){
	char c[1005], a[15];
	gets(c);
	gets(a);
	char *token = strtok(c, " ");
	while(token != NULL){
		if(strcmp(token, a) != 0) printf("%s ", token);
		token = strtok(NULL, " ");
	}

	return 0;
}

