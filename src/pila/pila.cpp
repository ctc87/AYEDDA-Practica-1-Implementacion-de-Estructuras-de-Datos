// fichero pila.cpp

#include "pila.hpp"

	pila::pila():
	top(NULL),
	ultimo(NULL),
	numElementos(0)
	{}

	bool pila::vacia() {   
		return(numElementos==0);

	}

	void pila::push(tipoDato dato) {
		nodo* nodoAInsertar = new nodo(dato);
		if(!vacia()) {
			nodo* aux = top;
			top = nodoAInsertar;
			top -> setNext(aux);
			aux -> setPrev(nodoAInsertar);
		} else {
			ultimo = nodoAInsertar;
			top = nodoAInsertar;
		}
		numElementos++;
	}

	tipoDato pila::pop() {
		nodo* aux = top;
		top = top -> getNext();
		delete aux -> getNext();
		numElementos--;
		return(aux -> getDato());
	}

	void pila::invertir() {
		nodo* aux = top;
		nodo* auxLinkp;
		nodo* auxLinkn;
			for(unsigned i = 0; i < numElementos; i++) {
			auxLinkn = aux -> getNext();
			auxLinkp = aux -> getPrev();
			aux -> setPrev(auxLinkn);
			aux -> setNext(auxLinkp);
			aux = aux -> getPrev();
		}
		aux = top;
		top = ultimo;
		ultimo = aux;	
	}

	void pila::imprimirpila() {
		nodo* aux;
                cout << "pila:" << endl;
                cout << "top -->";
                for(unsigned i = 0; i<numElementos; i++){
                	if(i == 0) {
				aux = top;
			} else {
				aux = aux -> getNext();	
			}
		cout  << aux -> getDato() << " -->"; 	
        	}
	cout << "último" << endl;	
	}	

	pila::~pila(){
		nodo* aux;
		while(!vacia()) {
			aux =  ultimo -> getPrev();
			delete ultimo -> getNext();
			ultimo = aux;
			numElementos--;
		}
	}	
