#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	int player;
	cout << "Carlos Alfredo Rivas Duque \nA jugar Piedra, Papel, Tijera, Lagarto o Spock! \nSeleciona tu movimiento \n";
	cout << "1. Piedra \n2. Papel \n3. Tijera \n4. Lagarto \n5. Spock \n: ";
	cin >> player;
	srand(time(0));
	string MComp;
	int mov = rand() % 5+1;
	switch(mov){
		case 1:
		MComp = "Piedra";
		break;
		case 2:
		MComp = "Papel";
		break;
		case 3:
		MComp = "Tijera";
		break;
		case 4:
		MComp = "Lagarto";
		break;
		case 5:
		MComp = "Spock";
		break;
	}
	cout << "La maquina escogio: " << MComp;
	if (player == mov){
		cout << ", Empate \n";
	} else if ((player == 1) && (mov == 3)){
		cout << ", Ganaste, la piedra aplasta las tijeras! \n";
	} else if ((player == 1) && (mov == 4)){
		cout << ", Ganaste, la piedra aplasta al lagarto! \n";
	} else if ((player == 2) && (mov == 1)){
		cout << ", Ganaste, el papel envuelve la piedra! \n";
	} else if ((player == 2) && (mov == 5)){
		cout << ", Ganaste, el papel desaprueva a Spock! \n";
	} else if ((player == 3) && (mov == 2)){
		cout << ", Ganaste, las tijeras cortan el papel! \n";
	} else if ((player == 3) && (mov == 4)){
		cout << ", Ganaste, las tijeras decapitan al lagarto! \n";
	} else if ((player == 4) && (mov == 2)){
		cout << ", Ganaste, el lagarto devora el papel! \n";
	} else if ((player == 4) && (mov == 5)){
		cout << ", Ganaste, el lagarto envenena a Spock! \n";
	} else if ((player == 5) && (mov == 1)){
		cout << ", Ganaste, Spock desintegra la piedra! \n";
	} else if ((player == 5) && (mov == 3)){
		cout << ", Ganaste, Spock aplasta las tijeras! \n";
	} else {
		cout << ", tu Perdiste \n";
	}
	return 0;
}

