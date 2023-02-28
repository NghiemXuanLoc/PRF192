#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

/*
 scanf dung nhap khi gap dau space or enter ....
 gets dung khi gap enter
 fgets(a,b,stdin), doc ca phim enter neu co(vay nen khi lam viec ta nen xoa phim enter cua ham fgets)
 a la mang muon nhap
 b la so ki tu toi da cua mang
 thay vao do ta dung gets() se nhap duoc car space, enter...
 scanf("%10s", a) nhap toi da 10 ki tu
 getchar() doc 1 ki tu o ban phim
 
xay dung cac ham co ban trong ngon ngu C
*/
// kiem tra chu in thuong
int is_lower(char c){
	if(c < 'a' && c > 'z') return 0;
	return 1;
}

// kiem tra chu in hoa
int is_upper(char c){
	if(c < 'A' && c > 'Z') return 0;
	return 1;
}

// kiem tra chu cai
int is_alpha(char c){
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return 1;
	return 0;
}

// kiem tra chu so
int is_digit(char c){
	if(c >= '0' && c <= '9') return 1;
	return 0;
}

// chuyen thanh in thuong
char to_lower(char c){
	if(c >= 'A' && c <= 'Z') c += 32;
	return c;
}

// chuyen thanh in hoa
char to_upper(char c){
	if(c >= 'a' && c <= 'z') c -= 32;
	return c;
}

// dem so luong ki tu co trong sau
int to_strlen(char c[]){
	int cnt = 0;
//	for(int i = 0;c[i] != '\0';i++){
//		cnt++;
//	}
	while(c[cnt] != '\0'){
		cnt++;
	}
	return cnt;
}

// chuyen tat ca sau thanh in thuong
char* strlwr(char c[]){
	for(int i = 0;i < strlen(c);i++){
		if(c[i] >= 'A' && c[i] <= 'Z') c[i] += 32;
	}
	return c;
}

// chuyen tat ca cac ki tu trong xau thanh in hoa
char* strupr(char c[]){
	for(int i = 0;i < strlen(c);i++){
		if(c[i] >= 'a' && c[i] <= 'z') c[i] -= 32;
	}
	return c;
}

// so sanh 2 xau ki tu
// a > b return 1, a == b return 0, a < b return 1;

int min(int a, int b){
	return a<b ? a : b;
}

int is_strcmp(char a[], char b[]){
	int n1 = strlen(a), n2 = strlen(b);
	
	for(int i = 0; i < min(n1, n2);i++){
		if(a[i] != b[i]){
			if(a[i] > b[i]) return 1;
			else return -1;
		}
	}
	if(n1 == n2) return 0;
	else if(n1 < n2) return -1;
	else if(n1 > n2) return 1;
}

// chuyen xau ki tu sang long long : atoll
// chuyen xau ki tu sang int : atoi

// ben tren la toi xay dung ham dua tren cac ham co san
// sau day toi se viet nhanh cac ham su trong trong lap trinh C


//int islower(char c)
//int isupper(char c)
//int isalpha(char c)
//int isdigit(char c)
// int strlen(char c[])
//int strcmp(char a[], char b[]) (1, 0, -1)
//int atoi(char c[])
//int atoll(char c[])

//char tolower(char c)
//char toupper(char c)
//
//char* strlwr(char a[], char b[])
//char* strupr(char a[], char b[])
//char* strrev(char c[])
//char* strcpy(char c[], char d[]) copy xau d vao xau c
//char* strcat(char c[], char d[]) noi 2 xau vao voi nhau
// char* strdup copy chuoi hien tai sang 1 chuoi moi
// char* strstr(char a[], char b[]) kiem tra xau b co phai la con cua xau a khong

//menset(a, 0, sizeof(a)); khoi tao tat ca gia tri mang a co gia tri la 0

int main(){
	char a[100] = "abcde";
	char b[100] = "HGKGHJ222GGGBHGFBBG";
	strupr(a);
	printf("%s", a);
	return 0;
}

