#include <iostream>
#include "rectangulo.h"
#include "circulo.h"

using namespace std;

int main(int argc, char** argv){
	
	Rectangulo r1(3,2);
	Rectangulo r2(2.0,4.0);
	
	
	Circulo c1(6);
	Circulo c2(1.5);
	
	
	cout << "Area de r1 = " << r1.calcularArea() << endl;
	cout << "Area de r2 = " << r2.calcularArea() << endl;
	
	
	cout << "Perimetro de r1 = " << r1.calcularPerimetro() << endl;
	cout << "Perimetro de r2 = " << r2.calcularPerimetro() << endl;
	
	
	cout << "Circulo c1, radio = " << c1.getRadio();
	cout << ", diametro = " << c1.calcularDiametro();
	cout << ", area = " << c1.calcularArea();
	cout << ", perimetro = " << c1.calcularPerimetro() << endl;
	
	
	cout << "Circulo c2, radio = " << c2.getRadio();
	cout << ", diametro = " << c2.calcularDiametro();
	cout << ", area = " << c2.calcularArea();
	cout << ", perimetro = " << c2.calcularPerimetro() << endl;
	
	return 0;
}
