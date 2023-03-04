#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

const int mod = 1e9 + 7;
typedef long long ll;


int main(){
	char c[1005];
	scanf("%s", c);
	int gtri[7] = {1, 5, 10, 50, 100, 500, 1000};
	char khieu[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
	ll cnt = 0;
	for(int i = 0;i < strlen(c);i++){
		if(c[i] >= c[i + 1]){
			for(int j = 0;j < 7;j++){
				if(c[i] == khieu[j]) cnt += gtri[j];
			}
		}else{
				for(int j = 0;j < 7;j++){
					if(c[i] == khieu[j]) {
						cnt -= gtri[j];
						printf("%lld\n", cnt);
					}
					if(c[i + 1] == khieu[j]) {
						cnt += gtri[j];
						printf("%lld\n", cnt);
					}
				}
				i++;
			}
		}
	printf("%lld", cnt);
	return 0;
}

