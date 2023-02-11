#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// cach 1 truyen thong kiem tra 1 so hoan hao

int check(ll n){
	ll sum = 0;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0) sum += i;
	}
	return n == sum;
}



int main(){
	ll n;
	printf("nhap vao man hinh gia tri muon kiem tra n = ");
	scanf("%lld", &n);
	if(check(n)) printf("day la mot so hoan hao\n");
	else printf("day khong phai la mot so hoan hao\n");
	return 0;
}

