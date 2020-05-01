#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void){
	string entrada;
	int i = 0, out = 0;
	
	cin >> entrada;
	
	for(i = 0; i < entrada.length(); i++){
		if(out == 0 && entrada[i] == 'h') out++;
		if(out == 1 && entrada[i] == 'e') out++;
		if(out == 2 && entrada[i] == 'l') out++;
		if(out == 3 && entrada[i] == 'l') out++;
		if(out == 4 && entrada[i] == 'o') out++;
	}	
	if(out == 5) cout  << "YES";
	else cout << "NO";
}
