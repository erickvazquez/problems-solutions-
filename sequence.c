#include <stdio.h>
#include <stdlib.h>

int main(void){
	int first, second, counter = 0, indexThree = 0, indexFive = 0, indexSeven = 0, i;

	printf("Enter first number\n");
	scanf("%d", &first);
	printf("Enter second number\n");
	scanf("%d", &second);
	int multThree[second - first], multFive[second - first], multSeven[second - first];
	printf("\n\nsequence: ");
	for(i = 1; first <= second; i++){
		printf("%d ", first);
		if(first % 3 == 0){
			 multThree[indexThree] = first;
			 indexThree ++;
		}
		if(first % 5 == 0){
			 multFive[indexFive] = first;
			 indexFive++;
		}
		if(first % 7 == 0){
			 multSeven[indexSeven] = first;
			 indexSeven ++;
		}
		counter ++;
		first += i;
	}
	printf("\n\n");

	printf("Numbers counted: %d\n\n", counter);
	printf("multiples of 3: \n");
	for(i = 0; i < indexThree; i++){
		printf("%d\n", multThree[i]);
	}

	printf("multiples of 5: \n");
	for(i = 0; i < indexFive; i++){
		printf("%d\n", multFive[i]);
	}

	printf("multiples of 7: \n");
	for(i = 0; i < indexSeven; i++){
		printf("%d\n", multSeven[i]);
	}

	return 0;
}