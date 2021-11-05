#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
	int  iValor = 10;
	int iContador = 1;
	double dSleep = 0;

	cout << "-------------------------- PROMGRAMA HILO ----------------------------" << endl;
	for (int i = 1; i <= iValor; i++) {
		dSleep = 1 - (1/i);
		iContador *= i;
		cout << "Recorrido " << i << " = " << iContador << endl;
		sleep(dSleep);
	}
	cout << "-------------------------- LLAMADO A PROGRAMA EXTERNO ------------------------------" << endl;
	system("./bin/geometria");
	cout << "-------------------------- FIN PROGRAMA ------------------------------" << endl;

	return 0;
}
