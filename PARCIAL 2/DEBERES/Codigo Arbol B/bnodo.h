/* ******************************************************
			  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
		Pograma: Arboles B+
		Autores:
		-Cajas Karla
		-Lara Nicole
		-Morales Miguel
		-Tipan Fernando
		Fecha de creaci�n: 2022-01-14
		Fecha de modificaci�n: 2022-01-14
		Versi�n: V1.0
				  ESTRUCTURA DE DATOS 7166
*********************************************************/
#pragma once 
#include <iostream> 
#include <stdlib.h> 
#define TAMANO 1000 
using namespace std;
class stclave {
public:
	int valor;
	long registro;
};
class bnodo {
public:
	bnodo(int nClaves);
	~bnodo();
private:
	int clavesUsadas;
	stclave* clave;
	bnodo** puntero;
	bnodo* padre;
	friend class btree;
};
typedef bnodo* pbnodo;
bnodo::bnodo(int nClaves) {
	clavesUsadas = 0;
	clave = new stclave[nClaves];
	puntero = new pbnodo[nClaves + 1];
	padre = NULL;
}
bnodo::~bnodo()
{
	delete[] clave;
	delete[] puntero;
}