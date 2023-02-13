#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>

const int mod = 1e9 + 7;
typedef long long ll;

int main(){
	srand(time(NULL));
	int total, x, y, cnt = 1;
	
	do{
		printf("input from the total keyboard = ");
		scanf("%d", &total);
	}while(total < 2 || total > 12);
	
	printf("Dice Thrower\n============\ntotal sought : %d\n", total);
	do{
		x = 1 + rand()%(6);
		y = 1 + rand()%(6);
		printf("Result of throw %d : %d + %d\n", cnt, x, y);
		cnt++;
	}while(x + y != total);
	return 0;
}

