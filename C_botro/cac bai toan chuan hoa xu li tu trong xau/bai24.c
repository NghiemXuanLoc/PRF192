#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// ham tinh tong chu so trong chuoi
int sum(char c[],int res,int n){
	int tong = 0;
	for(int i = res; i < n;i++){
		tong = tong*10 + c[i] - '0';
	}
	return tong;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int tong = 0, res;
		char c[1005];
		scanf("%s", c);
		for(int i = 0;i < strlen(c);i++){
			if(isdigit(c[i])){
				res = i;
				while(isdigit(c[i])){
					i++;
				}
				tong += sum(c, res, i);
			}
		}
		printf("%d\n", tong);	
	}
	return 0;
}

