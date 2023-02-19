#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

char* strlwr(char c[]){
	for(int i = 0;i < strlen(c);i++){
		if(c[i] >= 'A' && c[i] <= 'Z') c[i] += 32;
	}
	return c;
}

int main(){
	char c[1005];
	gets(c);
	strlwr(c);
	printf("%s", c);

	return 0;
}

