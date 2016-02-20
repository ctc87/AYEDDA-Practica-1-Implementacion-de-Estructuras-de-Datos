// fichero cola.cpp

#include "cola.hpp"

	cola::cola():
	primero(NULL),
	ultimo(NULL),
	numElementos(0)
	{}

	bool cola::vacia() {   
		return(numElementos==0);

	}

	void cola::encolar(tipoDato dato) {
		nodo* nodoAEncolar = new nodo(dato);
		if(!vacia()) {
			nodo* aux = ultimo;
			ultimo = nodoAEncolar;
			ultimo -> setPrev(aux);
			aux -> setNext(ultimo);			
		} else {
			ultimo = nodoAEncolar;
			primero = nodoAEncolar;
		}
		numElementos++;
	}

	tipoDato cola::desencolar() {
		nodo* aux = primero;
		primero = primero -> getNext();
		delete aux -> getNext();
		numElementos--;
		return(aux->getDato());
	}

	void cola::invertir() {
		nodo* aux = primero;
		nodo* auxLinkp;
		nodo* auxLinkn;
			for(unsigned i = 0; i < numElementos; i++) {
			auxLinkn = aux -> getNext();
			auxLinkp = aux -> getPrev();
			aux -> setPrev(auxLinkn);
			aux -> setNext(auxLinkp);
			aux = aux -> getPrev();
		}
		aux = primero;
		primero = ultimo;
		ultimo = aux;	
	}

	void cola::colarPrimeraPos(unsigned posActual) {
        nodo* paux;
        nodo* naux;
		nodo* aux = primero;
		for(unsigned i = 0; i < posActual-1; i++) {
			aux = aux -> getNext();
		}
		numElementos--;
		paux = aux -> getPrev();
		naux = aux -> getNext();
		paux -> setNext(naux);
		naux -> setPrev(paux);
        aux -> setNext(NULL);
        aux -> setPrev(NULL);
        invertir();
        nodo* penultimo = ultimo;
        ultimo = aux;
        ultimo -> setPrev(penultimo);
        penultimo -> setNext(ultimo);
        numElementos++;
		invertir();
		cout << "imprimiendo";
		imprimirCola();
	}

	void cola::imprimirCola() {
		nodo* aux;
                cout << "Cola:" << endl;
                cout << "Primero -->";
                for(unsigned i = 0; i<numElementos; i++){
                	if(i == 0) {
				aux = primero;
			} else {
				aux = aux -> getNext();	
			}
		cout  << aux -> getDato() << " -->"; 	
        	}
	cout << "último" << endl;
	}	

	cola::~cola(){
		nodo* aux;
		while(!vacia()) {
			aux = primero -> getNext();
			delete primero->getPrev();
			primero = aux;
			numElementos--;
		}
	}	
