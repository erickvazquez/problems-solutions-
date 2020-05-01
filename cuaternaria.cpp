#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> arreglo;

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

int busquedaCuaternaria(int n, int inicio, int fin){
	int dosCuartos = (inicio + fin) / 2, unCuarto = (inicio + dosCuartos) / 2, tresCuartos = (dosCuartos + fin) / 2;
	if(inicio <= fin){
		if(n == arreglo[unCuarto]) return unCuarto;
		else if(n == arreglo[dosCuartos]) return dosCuartos;
		else if(n == arreglo[tresCuartos]) return tresCuartos;
		else if(n < arreglo[unCuarto]) busquedaCuaternaria(n, inicio, unCuarto - 1);
		else if(n > arreglo[tresCuartos]) busquedaCuaternaria(n, tresCuartos + 1, fin);
		else if(n > arreglo[unCuarto] && n < arreglo[dosCuartos]) busquedaCuaternaria(n, unCuarto + 1, dosCuartos - 1);
		else if(n > arreglo[dosCuartos] && n < arreglo[tresCuartos]) busquedaCuaternaria(n, dosCuartos + 1, tresCuartos - 1);
	} 
	else return -1;
}

int main(void){
	int tam, valor, posicion;
	srand(time(0));
	////////////////////////////////////////////////////GENERAR ARREGLO
	cout << "\n\nIngrese el tamanio del arreglo\n\n";
	cin >> tam;
	generarArreglo(tam);
	cout << "Arreglo: " << endl;
	for(int i = 0; i < arreglo.size(); i++)
		cout << "| " << arreglo[i] << " ";
	cout << "|" << endl;
	///////////////////////////////////////////////////
	cout << "Ingrese numero a buscar\n\n";
	cin >> valor;
	cout << "\nEl valor que desea buscar es: " << valor << endl;
	posicion = busquedaCuaternaria(valor, 0, tam-1);
	if(posicion < 0)
		cout << "El valor NO se encuentra en el arreglo" << endl;
	else
		cout << "El valor SI se encuentra en el arreglo y esta en la posicion   " << posicion+1 << "  del arreglo" << endl;

	return 0;
}