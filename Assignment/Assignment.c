#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// ham tim vi tri cua 1 gia tri trong mang
int search(int a[], int n, int x){
	for(int i = 0;i < n;i++){
		if(a[i] == x) return i;
	}
	return -1;
}

// ham xoa 1 phan tu khoi mang
void Remove(int a[], int *n, int index){
	for(int i = index;i < *n;i++){
		a[i] = a[i + 1];
	}
	(*n)--;
}

// ham them 1 gia tri
void addValue(int a[], int *n){
	int x;
	printf("\nEnter the value you want to ADD to the array: ");
	scanf("%d", &x);
	a[(*n)++] = x;
}

// ham in ra cac vi tri cua 1 gia tri co trong mang
void findValue(int a[], int n){
	int x;
	printf("\nEnter the value you want to SEARCH in the array: ");
	scanf("%d", &x);
	int index = search(a, n, x); // danh dau xem x co xuat hien trong mang khong
	
	if(index != -1){
		printf("\nthe positions where the %d value appears in the array are respectively: ", x);
		for(int i = index;i < n;i++){
			if(a[i] == x){
				printf("%d ", i + 1);
			}
		}
		printf("\n");
	}else printf("\nThe entered value does not appear in the array\n");
}

// xoa su ton tai dau tien cua 1 gia tri
void removeFirstValue(int a[], int *n){
	int x;
	
	printf("\nEnter the value you want to remove the first occurrence in the array: ");
	scanf("%d", &x);
	
	int index = search(a, *n, x); // (*) la toan tu giai tham chieu
	// index luu lai vi tri dau tien cua x xuat hien trong mang
	
	// xoa x khoi mang
	if(index != -1){
		// n trong ham "removeFirstValue" dang la con tro, nen ta kh can
		// truyen dia chi cua n vao ham "Remove"
		Remove(a, n, index);
	}
}

// xoa moi su ton tai cua 1 gia tri
void removeAllValue(int a[], int *n){
	int x;
	printf("\nenter the value you want to remove all from the array: ");
	scanf("%d", &x);
	
	int index = search(a, (*n), x);
	// index luu vi tri xuat hien cua x trong mang
	
	// vong while dung khi x khong con xuat hien trong mang
	while(index != -1){
		// n trong ham "removeAllValue" dang la con tro, nen ta kh can
		// truyen dia chi cua n vao ham "Remove"
		Remove(a, n, index);
		index = search(a, *n, x);// (*) la toan tu giai tham chieu
	}
}

// ham in cac phan tu co trong mang
void printArray(int a[], int n){
	printf("\nthe elements of the array are respectively: ");
	for(int i = 0;i < n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

// ham sap xep, tang dan khi x = 1, giam dan khi x = -1
void sort(int a[], int n, int x){
	for(int i = 0;i < n - 1;i++){
		int min_pos = i;
		for(int j = i + 1;j < n;j++){
			if((a[min_pos] - a[j])*x > 0){
				min_pos = j;
			}
		}
		int temp = a[min_pos];
		a[min_pos] = a[i];
		a[i] = temp;
	}
}


void MENU(){
	printf("\n------------------MENU------------------\n");
	printf("1- Add a value\n");
	printf("2- Search a value\n");
	printf("3- Remove the first existence of a value\n");
	printf("4- Remove all existences of a value\n");
	printf("5- Print out the array\n");
	printf("6- Sort the array in ascending order\n");
	printf("7- Sort the array in descending order\n");
	printf("----------------------------------------\n\n");
}

int main(){
	int a[205];
	int n = 0;
	int x;
	do{
		MENU();
		
		scanf("%d", &x);
		switch(x){
			case 1:
				addValue(a, &n);
				break;
			case 2:
				findValue(a, n);
				break;
			case 3:
				removeFirstValue(a, &n);
				break;
			case 4:
				removeAllValue(a, &n);
				break;
			case 5:
				printArray(a, n);
				break;
			case 6:
				sort(a, n, 1);
				break;
			case 7:
				sort(a, n, -1);
				break;
			default:
				printf("\nyou have exited the MENU\n");
				break;
		}
	}while((char)(x + '0') > '0' && (char)(x + '0') < '8');
	// ep sang kieu (char) xu ly truong hop nhap cac ki tu khac

	return 0;
}

