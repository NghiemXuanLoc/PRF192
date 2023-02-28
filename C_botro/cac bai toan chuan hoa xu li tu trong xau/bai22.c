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
	getchar();
	while(t--){
		int le = 0;
		int dem[256] = {0};
		char c[1005];
		gets(c);
		for(int i = 0;i < strlen(c);i++){
			dem[c[i]]++;
		}
		for(int i = 0;i < 256;i++){
			if(dem[i] % 2 == 1) le++;
		}
		if(le == 0 || le == 1) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}

