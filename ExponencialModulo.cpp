#include <stdio.h>
#include <math.h>
long double exponenciacion(double n, unsigned int exponente, double mod){
	if(exponente == 1)return n;
	else{
		if(exponente % 2 == 0){
			printf("%Lf", fmod(n*n, mod));
			return fmod((fmod(exponenciacion(n, exponente/2, mod), mod) * fmod(exponenciacion(n, exponente/2, mod), mod)), mod);
		}
		else{
			printf("%ld %Lf\n", exponente, n);
			return fmod(fmod(fmod(exponenciacion(n, exponente/2, mod), mod) * fmod(exponenciacion(n, exponente/2, mod),mod), mod)* fmod(n, mod), mod);
		}
	}
}

int main(void){
	unsigned int exponente;
	long double resultado;
	double mod, n;
	printf("\nIngrese el numero a elevar:");
	scanf("%Lf", &n);
	printf("\nIngrese Exponente: ");
	scanf("%ld", &exponente);
	printf("\nIngrese el modulo: ");
	scanf("%Lf", &mod);
	resultado = exponenciacion(n, exponente, mod);
	printf("\nEl resultado es: %.0Lf\n", resultado);
}
