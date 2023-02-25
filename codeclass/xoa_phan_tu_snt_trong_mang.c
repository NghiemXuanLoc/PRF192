#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;
// cho 1 day so nguyen gom n phan tu, n nhap vao tu ban phim.
// xoa tat ca cac phan tu la so nguyen to, hien thi day truoc va sau khi xoa

// ham kiem tra so nguyen to 
int checkSnt(int n){
	for(int i = 2;i <= sqrt(n);i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

// ham xoa 1 phan tu khoi mang 
int xoaPhanTu(int a[], int n, int j){
	for(int i = 0; i < n - 1;i++){
		if(i >= j){
			a[i] = a[i + 1];
		}
	}
	n -= 1;
	return n;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0;i < n;i++){
		scanf("%d", &a[i]);
	}
	printf("mang truoc khi xoa: ");
	for(int i = 0;i < n;i++){
		printf("%d ", a[i]);
	}
	
	for(int i = 0;i < n;i++){
		if(checkSnt(a[i])){
			int temp = i;
			n = xoaPhanTu(a, n, temp);
			i -= 1;
		}  
	}

	printf("\n");
	printf("mang sau khi xoa: ");
	for(int i = 0;i < n;i++){
		printf("%d ", a[i]);
	}
	return 0;
}

