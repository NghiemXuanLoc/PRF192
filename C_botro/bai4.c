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
	int dem[256] = {0};
	for(int i = 0;i < strlen(c);i++){
		dem[c[i]]++;
	}
	for(int i = 0; i <= 255;i++){
		if(dem[i]){
			printf("%c %d\n", (char)i, dem[i]);
			dem[i] = 0;
		}
	}
	return 0;
}

