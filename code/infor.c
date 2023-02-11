#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	int n;
	printf("nhap vao man hinh gia tri cua n = ");
	scanf("%d", &n);
	
	//	hinh thu 1
//	for(int i = 1; i <= n; i++){
//		int k = 0;
//		for(int j = 1; j <= i; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	hinh thu 2
	for(int i = 1; i <= n; i++){
		int k = 0;
		for(int j = 1; j <= i; j++){
			printf("%d ", k);
			k++;
			if(k == 10) k = 0;
		}
		printf("\n");
	}

//	hinh thu 3
//	for(int i = 1; i <= n; i++){
//		int k = 0;
//		for(int j = 1; j <= i; j++){
//			printf("%d ", k);
//			k += 2;
//		}
//		printf("\n");
//	}

// hinh thu 4
// 	for(int i = 1; i <= n; i++){
//		int k = 1;
//		for(int j = 1; j <= i; j++){
//			printf("%d ", k);
//			k += 2;
//		}
//		printf("\n");
//	}

	// hinh thu 5
// 	for(int i = 1; i <= n; i++){
//		int k = 0;
//		for(int j = 1; j <= i; j++){
//			printf("%d ", k);
//			k += 2;
//			if(k == 10) k = 0;
//		}
//		printf("\n");
//	}

//	hinh thu 6
//	int k = 1;
//	 	for(int i = 1; i <= n; i++){
//		for(int j = 1; j <= i; j++){
//			printf("%d ", k);
//			k += 2;
//			if(k == 11) k = 1;
//		}
//		printf("\n");
//	}
	
	return 0;
}

