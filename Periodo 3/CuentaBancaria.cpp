#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Banco {
	public:
		Banco();
		void get_detalles();
		double getSaldo();
		void setSaldo(double sal);
		void importeDeposito(double x);
		bool importeRetiro(double x);
	private:
		string nombreTitular;
		int numeroCuenta;
		double saldo;
};



Banco::Banco(){
	nombreTitular = "Carlos Rivas";
	numeroCuenta = 14242421;
	saldo = 400;
}

double Banco::getSaldo(){
	return saldo;
}

void Banco::setSaldo(double sal){
	saldo = sal;
}

void Banco::importeDeposito(double x){
	saldo += x;
}

bool Banco::importeRetiro(double x){
	if (x > saldo){
		return false;
	}
	else {
		saldo -= x;
		return true;
	}
}

void Banco::get_detalles() {
	cout << "Titular: " << nombreTitular << endl;
	cout << "Cuenta: " << numeroCuenta << endl;
	cout << "Saldo: $" << saldo << endl;
}


int main(){
	Banco miCuenta;
	miCuenta.get_detalles();
	double cantidad;
	char opcion;
	
	do {
		cout << "a) depositar b) retirar c) consultar d) terminar" << endl;
		cin >> opcion;
		switch (opcion){
			case 'a':{
				cout << "Cantidad: ";
				cin >> cantidad;
				miCuenta.importeDeposito(cantidad);
				break;
			}
			case 'b':{
				cout << "Cantidad: ";
				cin >> cantidad;
				bool respuesta = miCuenta.importeRetiro(cantidad);
				if (respuesta == false){
					cout << "No hay Saldo suficiente en la cuenta" << endl;
				}
				break;
			}
			case 'c':{
				miCuenta.get_detalles();
				break;
			}
		}
	} while (opcion != 'd');
	
	return 0;
}
