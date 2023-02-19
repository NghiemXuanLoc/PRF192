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
	for(int i = 0; i < strlen(c);i++){
		if(dem[c[i]]){
			printf("%c %d\n", c[i], dem[c[i]]);
			dem[c[i]] = 0;
		}
	}
	return 0;
}

