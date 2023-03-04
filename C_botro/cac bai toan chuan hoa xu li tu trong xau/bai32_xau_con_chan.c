#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int cnt = 0;
		char s[65005];
		scanf("%s", s);
		for(int i =0;i < strlen(s);i++){
			if((s[i] - '0') % 2 == 0) cnt += i + 1;
		}
		printf("%d", cnt);
	}

	return 0;
}

