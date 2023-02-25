#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// them 1 so thuc vao mang co san
void addValue(int a[], int n){
	int temp;
	printf("Enter the value you want to add to the array: ");
	scanf("%d", &temp);
	printf("\n\n");
	a[n++] = temp;
	
}

// tim kiem 1 phan tu trong mang
int searchValue(int a[], int n, int x){
	for(int i = 0;i < n;i++){
		if(a[i] == x) return 1;
	}
	return 0;
}

// in mang
void printArray(int a[], int n){
	printf("\n");
	for(int i = 0;i < n;i++){
		printf("%d ", a[i]);
	}
	printf("\n\n");
}

void printRange(int a[], int n, int min_val, int max_val){
	printf("\n");
	for(int i = 0;i < n;i++){
		if(a[i] >= min_val && a[i] <= max_val) printf("%d ", a[i]);
	}
	printf("\n\n");
}
int main(){
	int a[105];
	int n = 0;
	char x;
	do{
		printf("-----------------\n");
		printf("      MENU\n");
		printf("-----------------\n");
		printf("1- Add  a value\n");
		printf("2- Search a value\n");
		printf("3- Print out the array\n");
		printf("4- Print out values in a range\n");
		printf("5- Print out the array in ascending order\n");
		printf("Others-Quit\n\n");
		printf("enter your selection: ");
		scanf("%c", &x);
		
		switch(x){
			case 49:
				addValue(a, n);
				n++;
				break;
			case 50:
				int temp;
				printf("Enter the value you want to search on the screen: ");
				scanf("%d", &temp);
				if(searchValue(a, n, temp)) printf("\nelement in array\n\n");
				else printf("\nelement not in array\n\n");
				break;
			case 51:
				printArray(a, n);
				break;
			case 52:
				int min_val, max_val;
				printf("input 2 values min_val and max_val: ");
				scanf("%d%d", &min_val, &max_val);
				printRange(a, n, min_val, max_val);
				break;
			case 53:
				break;
		}
	}while(x > 48 && x < 54);

	return 0;
}

