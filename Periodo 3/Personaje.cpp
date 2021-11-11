#include <iostream>
#include <string>

using namespace std;

class Personaje {
	public:
		Personaje(string nombre, double PuntosVida);
		double getPV();
		string getNombre();
		void puntosGanados(double comer);
		void puntosPerdidos(double recibirGolpe);
		bool estaVivo(double hp);
	private:
		string nombre;
		double PuntosVida;
};



Personaje::Personaje(string nombre, double PuntosVida){
	if (PuntosVida <0){
		this->PuntosVida = 0;
	} else {
		this->PuntosVida = PuntosVida;
	}
	this->nombre = nombre;
}

double Personaje::getPV(){
	return this->PuntosVida;
}

string Personaje::getNombre(){
	return this->nombre;


void Personaje::puntosGanados(double comer){
	this->PuntosVida += comer;
}

void Personaje::puntosPerdidos(double recibirGolpe){
	this->PuntosVida -= recibirGolpe;
}

//bool Personaje::estaVivo(double hp){
//	if (PuntosVida <= 0){
//		return false;
//	}
//	return true;
//	}
//}

int main(){
	Personaje miPersonaje("Cyrus sarknym", 400);
	cout << " --------------------- " << endl;
	cout << "Nombre Personaje: " << miPersonaje.getNombre << endl;
	cout << "Puntos de Vida: " << miPersonaje.getPV << endl;
	cout << " --------------------- " << endl;
	double Golpe = 50;
	double come = 100;
	char opcion;
	
	do {
		cout << "Accion a tomar: a) Comer b) Golpear c) terminar" << endl;
		cin >> opcion;
		switch (opcion){
			case 'a':{
				cout << "Comiendo y recuperando puntos de vida: ";
				miPersonaje.puntosGanados(come);
				cout << " --------------------- " << endl;
				cout << "Nombre Personaje: " << miPersonaje.getNombre << endl;
				cout << "Puntos de Vida: " << miPersonaje.getPV << endl;
				cout << " --------------------- " << endl;
				break;
			}
			case 'b':{
				cout << "Comiendo y recuperando puntos de vida: ";
				miPersonaje.puntosPerdidos(Golpe);
				cout << " --------------------- " << endl;
				cout << "Nombre Personaje: " << miPersonaje.nombre << endl;
				cout << "Puntos de Vida: " << miPersonaje.PuntosVida << endl;
				cout << " --------------------- " << endl;
//				cout << "A recivido un golpe y a perdido puntos de vida: ";
//				bool respuesta = miPersonaje.estaVivo();
//				if (respuesta == false){
//				cout << nombre << " a perdido todos sus puntos de vida" << endl;
//			}
				break;
			}


		}
	} while (opcion != 'c');
	
	return 0;
}
