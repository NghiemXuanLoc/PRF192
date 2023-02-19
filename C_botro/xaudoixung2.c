#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int check(char c[]){
	int l = 0, r = strlen(c) - 1;
	int temp = 0;
	while(l <= r){
		if(c[l] != c[r]){
			temp++;
		}
		l++;
		r--;
	}
	if(strlen(c) % 2 == 1 && temp <= 1 ) return 1;
	if(strlen(c) % 2 == 0 && temp == 1) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1005];
		scanf("%s", &c);
		if(check(c)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

