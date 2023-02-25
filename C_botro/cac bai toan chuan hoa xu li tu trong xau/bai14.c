#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	char c[1005];
	gets(c);
	strlwr(c);
	char a[20][50];
	int n = 0;
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	int max = 0, index = -1;
	for(int i = 0;i < n;i++){
		int cnt = 1;
		for(int j = i + 1;j < n;j++){
			if(strcmp(a[i], a[j]) == 0){
				cnt++;
			}
		}
		if(cnt > max){
			max = cnt;
			index = i;
		}else if(cnt == max && strcmp(a[index], a[i]) > 0){
				index = i;
		}
	}
	printf("%s %d\n",a[index], max);
	return 0;
}

