#include <stdio.h>
#include <stdlib.h>

long long int Factorial(int number){
	long long int fact = 1;
	int i;
	 for(i = 2; i <= number; i++){
	 	printf("%ld * ", fact);
	 	printf("%d", i);
	 	fact *= i;
	 	printf(" = %ld \n", fact);
	 }
	 return fact;
}

int main (void){
	int number;
	long long int factorial;
	printf("\nenter number\n");
	scanf("%d", &number);
	factorial = Factorial(number);
	printf("\nthe factorial of %d is %ld \n", number, factorial);
	return 0;
}