#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int max(int a, int b){
	return a<b ? b : a;
}

int main(){
	char c[1005];
	gets(c);
	int max_val = -1;
	int dem[256] = {0};
	
	for(int i = 0;i < strlen(c);i++){
		dem[c[i]]++;
		max_val = max(max_val, dem[c[i]]);
	}
	for(int i = 255; i >= 0;i--){
		if(dem[i] == max_val){
			printf("%c %d", (char)i, max_val);
			break;
		}
	}
	return 0;
}

