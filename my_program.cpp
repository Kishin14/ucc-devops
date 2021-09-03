#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {
	int  iValor = 0;
	int iContador = 0;
	cout << "Ingrese un valor para calcular una suma";
	cin >> iValor;
	cout << "Ha ingresado: " << iValor <<endl;
	for (int i = 1; i<= iValor; i++) {
		iContador += i;
	}
	cout << "El resultado es: " << iContador << endl;
	return 0;
}
