#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;
// tim chu co nhieu chu cai nhat dau tien trong chuoi
// tim chu co it chu cai nhat cuoi cung trong chuoi
	void tachXau(char c[], char a[][100], int *n, int *minVal, int *maxVal){
		
		char *token = strtok(c, " ");
		
		while(token != NULL){
			strcpy(a[(*n)++], token);
			int temp = strlen(token);
			if(*maxVal < temp){
				*maxVal = temp;
			}
			if(*minVal > temp){
				*minVal = temp;
			}
			token = strtok(NULL, " ");
		}
		
		char *chuMax, *chuMin;
		int ok = 0;
		
		for(int i = 0;i < *n;i++){
			if(*maxVal == strlen(a[i]) && ok == 0){
				chuMax = a[i];
				ok = 1;
			}
			if(*minVal == strlen(a[i])){
				chuMin = a[i];
			}
		}
		
		printf("chu max: %s\nchu min: %s\n", chuMax, chuMin);
	}

int main(){
	char c[1005];
	gets(c);
	char a[100][100];
	int n = 0, minVal = 1e9, maxVal = -1e9;
	tachXau(c, a, &n, &minVal, &maxVal);
	return 0;
}

