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
		char c[1005];
		gets(c);
		int dem[256] = {0};
		for(int i = 0;i < strlen(c);i++){
			dem[c[i]]++;
		}
		for(int i = 0;i < 256;i++){
			if(dem[i] == 1)printf("%c", (char)i);
		}
		printf("\n");
	}

	return 0;
}

