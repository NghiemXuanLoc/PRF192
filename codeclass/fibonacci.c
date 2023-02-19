#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// kiem tra 1 so co phai la so fibo hay khong

int check(ll n){
	ll fn2 = 0, fn1 = 1;
	if(n == 0) return 1;
	ll fn = fn2 + fn1;
	while(fn <= n){
		if(n == fn) return 1;
		fn2 = fn1;
		fn1 = fn;
		fn = fn1 + fn2;
	}
	return 0;
}

int main(){
	int n;
	scanf("%lld", &n);
	if(check(n)) printf("day la so fibo\n");
	else printf("day khong phai la so fibo\n");

	return 0;
}

