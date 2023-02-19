#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;
// tim uoc chung lon nhat va boi chung nho nhat

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b){
	return a * b / gcd(a, b);
}

int main(){
	int a, b;
	printf("nhap vao man hinh gia tri cua a va b = ");
	scanf("%d%d", &a, &b);
	printf("uoc chung lon nhat giua a va b = %d\n", gcd(a, b));
	printf("boi chung nho nhat giua a va b = %d", lcm(a, b));

	return 0;
}

