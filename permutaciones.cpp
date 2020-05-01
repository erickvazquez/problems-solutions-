#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
/*void mostrarPermutaciones(vector<int> permutaciones){
   int j; 
   if (i == n)
     printf("%s\n", a);
   else
   {
        for (j = i; j <= n; j++)
       {
          swap((a+i), (a+j));
          permute(a, i+1, n);
          swap((a+i), (a+j)); 
       }
   }

}*/

int main(void){
	int n = 5, unos = 0, treses = 0, cuatros = 0;
	int aux = 0;
	vector<int> permutaciones1;
	vector<int> permutaciones2;
	vector<int> permutaciones3;
	for(int i = 0; i < 3; i++){
		aux = n;
		if(i == 0){
			if(aux / 4 >= 1){
				cuatros = aux/4;
				aux = aux - (4 * cuatros);
				for(int j = 0; j < cuatros; j++)
					permutaciones1.push_back(4);
			} 
			if(aux / 3 >= 1){
				treses = aux/3;
				aux = aux - (3 * treses);
				for(int j = 0; j < treses; j++)
					permutaciones1.push_back(3);
			}
			if(aux / 1 >= 1){
				unos = aux;
				aux = aux - (1 * unos);
				for(int j = 0; j < unos; j++)
					permutaciones1.push_back(1);
			}
		}

		if(i == 1){
			if(aux / 3 >= 1){
				treses = aux/3;
				aux = aux - (3 * treses);
				for(int j = 0; j < unos; j++)
					permutaciones2.push_back(3);
			}
			if(aux / 1 >= 1){
				unos = aux;
				aux = aux - (1 * unos);
				for(int j = 0; j < unos; j++)
					permutaciones2.push_back(1);
			}
		}

		if(i == 2){
			if(aux / 1 >= 1){
				unos = aux;
				aux = aux - (1 * unos);
				for(int j = 0; j < unos; j++)
					permutaciones3.push_back(1);
			}
		}
	}

	for(int i = 0; i < permutaciones1.size(); i++){
		printf(" %d ", permutaciones1[i]);
	}
	printf("\n");

	for(int i = 0; i < permutaciones2.size(); i++){
		printf(" %d ", permutaciones2[i]);
	}
	printf("\n");

	for(int i = 0; i < permutaciones3.size(); i++){
		printf(" %d ", permutaciones3[i]);
	}
	printf("\n");
}