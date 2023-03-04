#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	char c[105];
	scanf("%s", c);
	char res[6] = {'h', 'e', 'l', 'l', 'o'};
	int cnt = 0;
	for(int i = 0;i < strlen(c);i++){
		if(res[cnt] == c[i]){
			cnt++;
		}  
	}
	if(cnt >= 5) printf("YES\n");
	else printf("NO\n");
	return 0;
}

