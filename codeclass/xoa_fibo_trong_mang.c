#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;
// cho 1 day so nguyen gom n phan tu, n nhap vao tu ban phim.
// xoa tat ca cac phan tu la so fibo

int fibo(ll n){
	ll f2 = 0, f1 = 1;
	ll fn = f1 + f2;
	if(n == 0){
		return 1;
	}
	while(fn <= n){
		if(fn == n) return 1;
		f2 = f1;
		f1 = fn;
		fn = f1 + f2;
	}
	return 0;
}

// ham xoa 1 phan tu khoi mang 
int xoaPhanTu(ll a[], int n, int j){
	for(int i = 0; i < n - 1;i++){
		if(i >= j){
			a[i] = a[i + 1];
		}
	}
	n -= 1;
	return n;
}

int main(){
	int n;
	scanf("%d", &n);
	ll a[n];
	for(int i = 0;i < n;i++){
		scanf("%lld", &a[i]);
	}
	printf("mang truoc khi xoa: ");
	for(int i = 0;i < n;i++){
		printf("%lld ", a[i]);
	}
	
	for(int i = 0;i < n;i++){
		if(fibo(a[i])){
			int temp = i;
			n = xoaPhanTu(a, n, temp);
			i -= 1;
		}  
	}

	printf("\n");
	printf("mang sau khi xoa: ");
	for(int i = 0;i < n;i++){
		printf("%lld ", a[i]);
	}
	return 0;
}

