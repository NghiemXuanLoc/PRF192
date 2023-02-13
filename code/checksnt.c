#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// check mang

int check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int cnt = 0;
	for(int i = 0;i < n;i++){
		scanf("%d", &a[i]);
		if(check(a[i])){
			cnt++;
			printf("%d ", i + 1);
		}
	}
	
	printf("\nco tat ca %d so nguyen to trong mang", cnt);

	return 0;
}

