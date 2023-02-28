#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	char a[1005], b[1005];
	scanf("%s%s", a, b);
	if(strstr(b, a) != NULL){
		printf("YES");
	}else printf("NO");

	return 0;
}

