
int areaCuadrado(double lado) {
	double area = 0.0;
	cout << "El lado ingresado del cuadrado es: " << lado << endl;
	area = lado * lado;
	cout << "El area del cuadrado es: " << area << endl;
	raizCuadrada(area);
	return 0;
}

int main() {
	cout << "-- Calculadora de areas --" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "Area de un circulo" << endl;
	areaCirculo(3);
	cout << "-------------------------------------------------" << endl;
	cout << "Area de un Triangulo" << endl;
	areaTriangulo(5,8);
	cout << "-------------------------------------------------" << endl;
	cout << "Area de un cuadrado" << endl;
	areaCuadrado(8);
	cout << "-------------------------------------------------" << endl;
	cout << "Brayan Alexander Tafur Arevalo" << endl;
	return 0;
}
