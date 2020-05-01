#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <int> arreglo;

void generarArreglo(int tamanio){
	int contenido; 
	for(int i = 0; i < tamanio; i++){
		contenido = rand()%100;
		if(i > 0  && contenido < arreglo[i-1])
			while(contenido <= arreglo[i-1])
				contenido += 10;
		arreglo.push_back(contenido);	
	}
}

int busquedaTernaria(int n, int inicio, int fin){
	int unTercio = (inicio * 2 + fin) / 3, dosTercios = (inicio + fin*2) / 3;
	if(inicio <= fin){
		if(n == arreglo[unTercio]) return unTercio;
		else if(n == arreglo[dosTercios]) return dosTercios;
		else if(n < arreglo[unTercio]) busquedaTernaria(n, inicio, unTercio-1);
		else if(n > arreglo[dosTercios]) busquedaTernaria(n, dosTercios+1, fin);
		else busquedaTernaria(n, unTercio + 1, dosTercios - 1);
	}
	else
	return -1;
}

int main(void){
	int tam, valor, posicion;
	srand(time(0));
	////////////////////////////////////////////////////GENERAR ARREGLO
	cout << "\nIngrese el tamanio del arreglo\n";
	cin >> tam;
	generarArreglo(tam);
	cout << "Arreglo: " << endl;
	for(int i = 0; i < arreglo.size(); i++)
		cout << "|" << arreglo[i] << " ";
	cout << "|" << endl;
	///////////////////////////////////////////////////
	cout << "Ingrese numero a buscar\n";
	cin >> valor;
	cout << "\nEl valor que desea buscar es: " << valor << endl;
	posicion = busquedaTernaria(valor, 0, tam-1);
	if(posicion < 0)
		cout << "El valor NO se encuentra en el arreglo" << endl;
	else
		cout << "El valor SI se encuentra en el arreglo y esta en la posicion   " << posicion+1 << "  del arreglo" << endl;

	return 0;
}