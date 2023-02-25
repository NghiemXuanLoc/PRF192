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
	char a[20][50];
	int n = 0;
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	
	for(int i = 0;i < n;i++){
		int ok = 1;
			for(int j = 0;j < i;j++){
				if(strcmp(a[i], a[j]) == 0) {
					ok = 0;
					break;
				}
			}
		if(ok) printf("%s ", a[i]);			
	}
	return 0;
}

