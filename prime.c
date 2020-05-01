#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	int first, last, counter = 0, isPrime = 1, i, j;
	printf("Enter first number\n");
	scanf("%d", &first);
	printf("Enter second number\n");
	scanf("%d", &last);
	if(first < 2) first  = 2;
	printf("prime numbers: \n\n");
	for(i = first; i < last; i++){
		isPrime = 1;
		for(j = 2; j <= sqrt(i); j++){
			if(i % j == 0){
				isPrime = 0;
			}
		}

		if(isPrime){
			printf("%d\n", i);
			counter ++;
		}
	}
	printf("I found %d prime numbers", counter);
}