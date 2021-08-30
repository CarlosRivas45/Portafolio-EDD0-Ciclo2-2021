#include <iostream>
using namespace std;

int main(){
	
	double x;
	double y;
	
	cout << "Calcula operaciones aritmeticas de dos numeros \n";
	
	cout << "Inserte un numero: ";
	cin >> x;
	
	cout << "Inserte el otro numero: ";
	cin >> y;
	
	cout << "Suma " << x + y << endl;
	cout << "Resta: " << x - y << endl;
	cout << "Multiplicacion: " << x * y << endl;
	cout << "Division: " << x / y << endl;
	
	int z = x;
	int w = y;
	cout << "Residuo de division: " << z + w << endl;
	
	++x;
	++y;
	cout << "Incremento en uno " << "x:" << x << " y:" << y << endl;
	
	--x;
	--y;
	cout << "Decremento en uno " << "x:" << x << " y:" << y << endl;
	
	return 0;
		
}
