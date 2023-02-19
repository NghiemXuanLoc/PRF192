#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int checkxau(char c[]){
	int l = 0, r = strlen(c) - 1;
	while(l <= r){
		if(c[l] != c[r]) return 0;
		l++;
		r--;
	}
	return 1;
}

int main(){
	char c[1005];
	scanf("%s", &c);
	if(checkxau(c)) printf("YES\n");
	else printf("NO\n");

	return 0;
}

