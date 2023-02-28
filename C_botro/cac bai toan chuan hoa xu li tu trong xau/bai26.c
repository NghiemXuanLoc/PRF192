#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

	int sum(char c[],int res,int n){
		int tong = 0;
		for(int i = res; i < n;i++){
			tong = tong*10 + c[i] - '0';
		}
		return tong;
	}

	tongdathuc(char c[], int musl[][1]){
		int mu = 0, pt = 0, temp = 1, res = 0, min = INT_MAX;
		for(int i = 0;i <strlen(c);i++){
			if(isdigit(c[i])){
				res = i;
				while(isdigit(c[i])){
					i++;
				}
				if(temp == 1) {
					pt = sum(c, res, i);
				}
				if(temp == 2){
					mu = sum(c, res, i);
				}
				temp++;
			}
			if(temp == 3){
				musl[mu][0] += pt;
				temp = 1;
			}	
		}
	}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		int cnt = 0;
		int musl[10005][1];
		memset(musl, 0, sizeof(musl));
		char c1[10005], c2[10005];
		gets(c1);gets(c2);
		tongdathuc(c1, musl);
		tongdathuc(c2, musl);
		for(int i = 10005;i >= 0;i--) if(musl[i][0]) cnt++;
		for(int i = 10005;i >= 0;i--){
		if(musl[i][0] != 0){
			printf("%d*x^%d", musl[i][0], i);
			cnt--;
			if(cnt != 0) printf(" + ");
		}
	}
		printf("\n");
	}
	return 0;
}

