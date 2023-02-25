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
	char a[100][100];
	char *token = strtok(c, " ");
	int n = 0;
	while(token != NULL){
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	
	int b[n];
	for(int i = 0;i < n;i++){
		b[i] = 0;
	}
	for(int i = 0;i < n;i++){
		if(b[i] == 0){
			int cnt = 1;
			for(int j = i + 1;j < n;j++){
				if(strcmp(a[i], a[j]) == 0){
					cnt++;
					b[j] = 1;
				}
			}
			printf("%s %d\n", a[i], cnt);
		}
	}
	return 0;
}

