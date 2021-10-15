#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
//Area del circulo
int areaCirculo(double radioP) {
	double PI = 3.14159265358979323846;
	double area = 0.0;
	cout << "El radio ingresado del circulo es: " << radioP << endl;
	area = pow(radioP, 2) * PI;
	cout << "El area del ciculo es: " << area << endl;
	cout << "Brayan Alexander Tafur Arevalo" << endl;
	return 0;
}

int areaTriangulo(double baseP, double alturaP) {
	double area = 0.0;
	cout << "La base ingresada del triangulo es: " << baseP << endl;
	cout << "La altura ingresada del triangulo es: " << alturaP << endl;
	area = (baseP * alturaP) / 2;
	cout << "El area del triangulo es: " << area << endl;
	cout << "Brayan Alexander Tafur Arevalo" << endl;
	return 0;
}

int areaCuadrado(double lado) {
	double area = 0.0;
	cout << "El lado ingresado del cuadrado es: " << lado << endl;
	area = lado * lado;
	cout << "El area del cuadrado es: " << area << endl;
	cout << "Brayan Alexander Tafur Arevalo" << endl;
	return 0;
}

int main() {
	cout << "-- Calculadora de areas --" << endl;
	cout << "Area de un circulo" << endl;
	areaCirculo(3);
	cout << "Area de un Triangulo" << endl;
	areaTriangulo(5,8);
	cout << "Area de un cuadrado" << endl;
	areaCuadrado(8);
	return 0;
}
