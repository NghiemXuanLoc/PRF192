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
		int n;
		scanf("%d", &n);
		char s[100];
		scanf("%s", s);
		int ok = 0, cnt = 0;
		for(int i = 0;i < strlen(s);i++){
			if(s[i] == '8'){
				cnt = strlen(s) - i;
				break;
			}	
		}
		if(cnt >= 11) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

