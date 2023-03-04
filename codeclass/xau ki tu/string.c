#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

	void getword(char c[], char a[][100], int *n){
		char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a[(*n)++], token);
		token = strtok(NULL, " ");
	}
	}
	// ham 1
	void chuanHoa(char a[][100], int n){
		int cnt = 0;
		for(int i = 0;i < n;i++){
			printf("%s", a[i]);
			cnt++;
			if(cnt == 2) printf(",");
		}
		printf("\n");
	}
	
	// ham 2
	void rev(char a[][100], int n){
		// cach 1 in nguoc lai xau
//		for(int i = n - 1;i >= 0;i--){
//			printf("%s ", a[i]);
//		}
//		printf("\n");
		// cach 2 xu ly xau
		char temp[50][100];
		for(int i = 0;i < n;i++){
			strcpy(temp[i], a[i]);
		}
		int l = 0, r = n - 1;
		while(l <= r){
			char res[1][100];
			strcpy(res[0], temp[l]);
			strcpy(temp[l], temp[r]);
			strcpy(temp[r], res[0]);
			l++;
			r--;
		}
		for(int i = 0;i < n;i++){
			printf("%s ", temp[i]);
		}
		printf("\n");
	}
	
	// ham 3
	void alphacase(char a[][100], int n){
		int cnt = 1;
		char temp[50][100];
		for(int i = 0;i < n;i++){
			strcpy(temp[i], a[i]);
		}
		for(int i = 0;i < n;i++){
			if(cnt % 2 == 0){
				printf("%s ", strlwr(temp[i]));
				cnt++;
			}else {
				printf("%s ", strupr(temp[i]));
				cnt++;
			}
		}
		printf("\n");
	}
	
	// ham 4
	
	int cmp(const void *a, const void *b){
		char *x = (char *)a;
		char *y = (char *)b;
		return strcmp(x, y);
	}
	
	void sort(char a[][100], int n){
		char temp[50][100];
		for(int i = 0;i < n;i++){
			strcpy(temp[i], a[i]);
		}
		qsort(temp, n, sizeof(temp[0]), cmp);
		for(int i = 0;i < n;i++){
			printf("%s ", temp[i]);
		}
		printf("\n");
	}
	
	// ham 5
	void tachXau(char a[][100], int n, int minVal, int maxVal){
		for(int i = 0;i < n;i++){
			int temp = strlen(a[i]);
			if(maxVal < temp){
				maxVal = temp;
			}
			if(minVal > temp){
				minVal = temp;
			}
		}
		char *chuMax, *chuMin;
		int ok = 0;
		
		for(int i = 0;i < n;i++){
			if(maxVal == strlen(a[i]) && ok == 0){
				chuMax = a[i];
				ok = 1;
			}
			if(minVal == strlen(a[i])){
				chuMin = a[i];
			}
		}
		
		printf("chu max: %s\nchu min: %s\n", chuMax, chuMin);
		printf("\n");
	}
int main(){
	char c[1005];
	gets(c);
	char a[50][100];
	int n = 0, minVal = 1e9, maxVal = -1e9;
	getword(c, a, &n);
	chuanHoa(a, n);
	rev(a, n);
	alphacase(a, n);
	sort(a, n);
	tachXau(a, n, minVal, maxVal);
	return 0;
}

