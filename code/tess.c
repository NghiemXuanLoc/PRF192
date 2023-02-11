#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// in ra so nguyen to tu 1 toi n nhap tu ban phimm

int check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n > 1;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("nhap so nguyen n ");
	printf("quy %d giay ra gio = %f", n, (float)n/60/60/24);
	
	return 0;
}

