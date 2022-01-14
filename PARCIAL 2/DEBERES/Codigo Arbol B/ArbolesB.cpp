/* ******************************************************
			  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
		Pograma: Arboles B+
		Autores:
		-Cajas Karla
		-Lara Nicole
		-Morales Miguel
		-Tipan Fernando
		Fecha de creación: 2022-01-14
		Fecha de modificación: 2022-01-14
		Versión: V1.0
				  ESTRUCTURA DE DATOS 7166
*********************************************************/
#include <iostream> 
#include "btree.h" 
#define TAMANO 10
using namespace std;
int main()
{
	std::cout << "ARBOLES B!\n";
	int matriz[TAMANO];
	btree arbol(2);
	stclave clave;
	int i;
	int j;
	//   srand(time(NULL)); 
	for (i = 0; i < TAMANO; i++) {
		do {
			matriz[i] = rand() % 10000;
			clave.valor = matriz[i];
			clave.registro = i;
		} while (!arbol.Insertar(clave));
	}
	cout << "mostrar: " << endl;
	arbol.Mostrar();
	cout << "Buscar elemento 23: " << matriz[0] << " posicion: " <<
		arbol.Buscar(matriz[0]) << endl;
	system("PAUSE");


	for (i = 0; i < TAMANO; i++) {
		std::cout << "Borrar: [" << i << "]: " << matriz[i] << endl;
		arbol.Borrar(matriz[i]);
		//      arbol.Mostrar(); 
	}
	arbol.Mostrar();
	return 0;
}