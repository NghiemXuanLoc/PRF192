#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
  char c[1005], res[1005];
  gets(c);
  int j = 0;
  for(int i = 0;i < strlen(c);i++){
  		if(isalpha(c[i])){
  			res[j++] = c[i];
		}	
  	}
  	res[j] = '\0';
  	printf("%s", res);
  return(0);
}
