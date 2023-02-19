#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d", &a[i]);
	}
	int newel;
	scanf("%d", &newel);
	int index = -1;
	for(int i = 0;i < n;i++){
		if(a[i] == newel) {
			index = i;
			break;
		}
	}
	if(index != -1){
		for(int i = 0;i < n - 1;i++){
			if(i >= index){
				a[i] = a[i+1];
			}
		}
		for(int i = 0; i < n - 1;i++){
			printf("%d ", a[i]);
		}
	}else printf("so can xoa khong co trong mang\n");
	return 0;
}

