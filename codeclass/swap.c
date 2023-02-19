#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
//	swap dung bien trung gian
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i = 0;i < n;i++){
//		scanf("%d", &a[i]);
//	}
//	int pos1, pos2;
//	scanf("%d%d", &pos1, &pos2);
//	if(pos1 >= 0 && pos1< n && pos2 >= 0 && pos2 < n){
//		int temp = a[pos1];
//		a[pos1] = a[pos2];
//		a[pos2] = temp;
//		for(int i = 0;i < n;i++){
//			printf("%d ", a[i]);
//		}
//	}else printf("2 vi tri can hoan doi khong hop le\n");

//swap khong dung bien trung gian
	
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d", &a[i]);
	}
	int i, j;
	scanf("%d%d", &i, &j);
	if(i >= 0 && i< n && j >= 0 && j < n){
		a[i] = a[i] ^ a[j];
		a[j] = a[i] ^ a[j];// lay gia tri ban dau cua a[j] gan vao a[j]
		a[i] = a[i] ^ a[j]; // lay gia tri ban dau cua a[i] gan vao a[i]
		for(int k = 0;k < n;k++){
			printf("%d ", a[k]);
		}
	}else printf("2 vi tri can hoan doi khong hop le\n");
	return 0;
}

