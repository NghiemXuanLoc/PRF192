#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	while(n > 10){
		int ans = 0;
		int temp = n;
		while(temp != 0){
			ans += temp % 10;
			temp /= 10;
		}
		n = ans;
	}
	
	printf("%d", n);
	return 0;
}

