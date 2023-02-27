#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

// nhap vao 1 chuoi, in ra nua chuoi dau la chu thuong, nua chu cuoi la hoa

// viet ham rev;

char* rev(char c[], char d[]){
	int n = 0;
	for(int i = strlen(c) - 1;i >= 0;i--){
		d[n++] = c[i];
	}
	return d;
}
int main(){
	char c[1005];
	gets(c);
	// cach 1 thao tac tung ki tu
	for(int i = 0; i < strlen(c);i++){
		if(i < strlen(c) / 2)  c[i] = toupper(c[i]);
		else c[i] = tolower(c[i]);
	}
	printf("%s\n", c);
	char d[1005];
	char *x = rev(c, d);
	printf("%s", x);
// cach 2 xu ly chuoi
// tao 2 mang, tach xau ban dau thanh 2 mang con, sau do dung ham strlwr, va strupr
	return 0;
}

