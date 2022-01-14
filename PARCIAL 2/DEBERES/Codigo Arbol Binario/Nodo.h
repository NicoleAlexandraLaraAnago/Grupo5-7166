/* ******************************************************
			  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
		Pograma: Arboles Binarios
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
#include <stdio.h>
using namespace std;
class Nodo
{
private:
	int dato;
	Nodo* izquierda;
	Nodo* derecha;
public:
	void setDato(int);
	void setIzquierda(Nodo*);
	void setDerecha(Nodo*);
	int getDato();
	Nodo*& getIzquierda();
	Nodo*& getDerecha();
	/*devuelve la informacion del nodo*/
};
void Nodo::setDato(int _dato) {
	dato = _dato;
}
void Nodo::setIzquierda(Nodo* _izquierda) {
	izquierda = _izquierda;
}
void Nodo::setDerecha(Nodo* _derecha) {
	derecha = _derecha;
}
int Nodo::getDato() {
	return dato;
}
Nodo*& Nodo::getIzquierda() {
	return izquierda;
}
Nodo*& Nodo::getDerecha() {
	return derecha;
}
