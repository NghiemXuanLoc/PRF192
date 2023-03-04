#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int max_val(char c[]){
	int res = 1, cnt = 1;
	int n = strlen(c);
	for(int i = 0;i < n - 1;i++){
		if(c[i] != c[i + 1]){
			res++;
		}else{
			res = 1;
		}
		if(res > cnt){
			cnt = res;
		}
	}
	return cnt;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1005];
		scanf("%s", c);
		int cnt = max_val(c);
		printf("%d", cnt);
	}
	return 0;
}

