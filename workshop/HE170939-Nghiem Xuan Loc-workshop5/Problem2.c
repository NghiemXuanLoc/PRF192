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
	}while(total < 2 || total > 20);
	
	printf("Ball Lottery\n============\ntotal sought : %d\n", total);
	
	do{
		x = 1 + rand() % 10;
		y = 1 + rand() % 10;
		printf("Result of picks %d and % d : %d + %d\n", cnt, cnt + 1, x, y);
		cnt += 2;
	}while(x + y != total);
	
	printf("You got your total in %d picks\n", cnt - 1);

	return 0;
}

