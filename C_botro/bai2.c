#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	char c[1005];
	gets(c);
	int alpha = 0, digit = 0, db = 0;
	for(int i = 0;i < strlen(c);i++){
		if(isdigit(c[i]))digit++;
		else if(isalpha(c[i])) alpha++;
		else db++;
	}
	printf("alpha:%d\ndigit: %d\ndac biet: %d\n", alpha, digit, db);
	return 0;
}

