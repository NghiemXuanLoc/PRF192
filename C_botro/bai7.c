#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	char a[1005], b[1005];
	gets(a);
	gets(b);
	int dem[256] = {0};
	for(int i = 0;i < strlen(a);i++){
		dem[a[i]] = 1;
	}
	for(int i = 0;i < strlen(b);i++){
		if(dem[b[i]]) dem[b[i]]++;
	}
	for(int i = 0; i < 256;i++){
		if(dem[i] >= 2) printf("%c", (char)i);
	}

	return 0;
}

