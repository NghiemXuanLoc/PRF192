#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int dem[256];

int check(char c[]){
	for(int i = 0;i < strlen(c);i++){
		c[i] = tolower(c[i]);
		dem[c[i]]++;
	}
	for(int i = 97;i <= 122;i++){
		if(dem[i] == 0) return 0;
	}
	return 1;
}
int main(){
	char c[1005];
	gets(c);
	if(check(c)) printf("YES\n");
	else printf("NO\n");
	return 0;
	
}

