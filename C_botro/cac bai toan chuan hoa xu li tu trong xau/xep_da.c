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
	char c[1005];
	scanf("%s", c);
	int cnt = 0;
	for(int i = 0;i < n - 1;i++){
		if(c[i] == c[i + 1]) cnt++;
	}
	printf("%d", cnt);
	return 0;
}

