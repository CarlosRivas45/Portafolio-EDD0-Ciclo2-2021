#ifndef LISTA_ENTEROS_H
#define LISTA_ENTEROS_H
#include <string>
#include <sstream>
#include <iostream>

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

class ListaEnteros {
private:
	int cuenta;
	int capacidad;
	int *items;
	void agrandar();
public:
	ListaEnteros(int capacidad);
	ListaEnteros();
	~ListaEnteros();
	ListaEnteros(const ListaEnteros &otra);
	bool estaVacia();
	int tamano();
	void insertar(int indice, int item);
	void adjuntar(int item);
	int obtener(int indice);
	bool contiene(int item);
	int remover(int indice);
	string comoCadena();
};


ListaEnteros::ListaEnteros(int capacidad){
	cout << "Creando una lista vacia..." << endl;
	this->cuenta = 0;
	this->capacidad = capacidad;
	this->items = new int[capacidad];
	cout << " La lista tiene capacidad para " << this->capacidad << " elementos" << endl;
}

ListaEnteros::ListaEnteros() : ListaEnteros(4) {}

ListaEnteros::~ListaEnteros(){
	cout << "Destruyendo la lista..." << endl;
	delete[] items;
}

ListaEnteros::ListaEnteros(const ListaEnteros &otra){
	cout << "Copiando una lista desde otra..." << endl;
	this->cuenta = otra.cuenta;
	this->capacidad = otra.capacidad;
	this->items = new int[capacidad];
	for (int i = 0; i < this->estaVacia(); i++)
		this->items[i] = otra.items[i];
}


bool ListaEnteros::estaVacia(){
	cout << "Comprobando si la lista esta vacia..." << endl;
	return this->cuenta == 0;
}


int ListaEnteros::tamano(){
	cout << "Obteniendo el tamano de la lista..." << endl;
	return this->cuenta;
}

void ListaEnteros::agrandar(){
	cout << "Duplicando el tamano de la lista..." << endl;
	int *temp = this->items;
	this->capacidad *= 2;
	this->items = new int[capacidad];
	for (int i = 0; i < cuenta; i++)
		this->items[i] = temp[i];
	delete[] temp;
	cout << " La lista tiene capacidad para " << this->capacidad << " elementos" << endl;
}


void ListaEnteros::insertar(int indice, int item){
	
	if (indice < 0 || indice > this->cuenta) throw "Indice fuera de rango";
	
	
	if (this->cuenta >= this->cuenta) this->agrandar();
	
	cout << "Insertando un elemento..." << endl;
	
	for (int i = cuenta - 1; i >= indice; i--){
		cout << " Desplazando elemento " << items[i] << " del indice " ;
		cout << i << " al indice " << (i+1) << endl;
		this->items[i+1] = this->items[i];
	}
	
	
	cout << " Insertando elemento " << item << " en el indice " << indice << endl;
	this->items[indice] = item;
	
	
	cout << " Incrementando la cuenta de elemntos" << endl;
	this->cuenta++;
}


void ListaEnteros::adjuntar(int item){
	this->insertar(this->cuenta, item);
}


int ListaEnteros::obtener(int indice){
	
	if(indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";
	if(this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
	
	cout << "Recuperando elemento en el indice " << indice << endl;
	return this->items[indice];
}


bool ListaEnteros::contiene(int item){
	for (int i = 0; i < this->cuenta; i++){
		cout << "Recorriendo elemento con indice " << i << endl;
		if (this->items[i] == item)
			return true;
	}
	
	return false;
}


int ListaEnteros::remover(int indice){
	
	if (this->estaVacia()) throw "No se puede remover elementos de una lista vacia";
	if (indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";
	
	cout << "Removiendo el elemnto con indice " << indice << "..." << endl;
	
	int valor = this->items[indice];
	for (int i = indice; i < cuenta - 1; i++){
		cout << " Desplazando elemnto " << items[i] << " del indice ";
		cout << (i+1) << " al indice " << i << endl;
		this->items[i] = this->items[i+1];
	}
	
	
	cout << " Reduciendo la cuenta de elemntos" << endl;
	this->cuenta--;
	return valor;
}

string ListaEnteros::comoCadena(){
	ostringstream s;
	s << "[";
	for (int i = 0; i < (this->cuenta); i++){
		s << this->items[i];
		if (i < this->cuenta-1)
			s << ", ";
	}
	s << "]";
	return s.str();
}

#endif
