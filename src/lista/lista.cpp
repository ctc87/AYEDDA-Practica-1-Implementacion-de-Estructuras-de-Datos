// fichero lista.cpp

#include "lista.hpp"

	lista::lista():
	numNodos(0),
	inicio(NULL),
	fin(NULL)
	{}

	lista::lista(nodo* nodoInicial):
	numNodos(1),
	inicio(nodoInicial),
	fin(nodoInicial)
	{}

	bool lista::vacia() {
		return(numNodos == 0);
	}
	
	nodo* lista::extrInicio() {
		nodo* sig = inicio->getNext();
		nodo* aux = inicio;
		inicio = sig;
		sig->setPrev(NULL);
		delete aux->getNext();
		aux->setNext(NULL);
		return(aux);
		numNodos--;	
	}

       void lista::insertInicio(nodo* nodoAInsertar) {
		if(!vacia()) {
			nodo* aux = inicio;
			aux->setPrev(nodoAInsertar);
			nodoAInsertar->setNext(aux);
			inicio = nodoAInsertar;
		} else {
			inicio = nodoAInsertar;
			fin = nodoAInsertar;
		}
		numNodos++;
	}
	
	nodo* lista::extrFin() {
		nodo* ant = fin->getPrev();
		nodo* aux = fin;
		fin = ant;
		ant->setNext(NULL); 
		delete aux->getPrev();
		aux->setPrev(NULL);
		return(aux);
		numNodos--;
	}

	void lista::insertFin(nodo* nodoAInsertar) {
		if(!vacia()) {
			nodo* aux = fin;
			aux->setNext(nodoAInsertar);
			nodoAInsertar->setPrev(aux);
			fin = nodoAInsertar;
		} else {
			inicio = nodoAInsertar;
			fin = nodoAInsertar;
		}
		numNodos++;
	}
	
	nodo* lista::iterador(unsigned n){
		nodo* it=inicio;
		for (unsigned i = 0; i<n; i++){
			it=it->getNext();
		}
		return(it);			
	}
	
	nodo* lista::iteradorInv(unsigned n){
		nodo* it=fin;
		for(unsigned i = 0; i<n; i++){
			it=it->getPrev();
		}
		return(it);
	}

	void lista::imprimirLista(){
		nodo* aux;
		cout << "Lista:" << endl; 
		cout << "inicio <-";
                for(unsigned i = 0; i<numNodos; i++){
			aux = iterador(i);
			if(i==0)
				cout <<  "|";
			else
				cout << " <-|";
			cout << aux -> getDato();
			if(i == numNodos - 1)
				cout <<  "|";
			else
				cout << "|-> ";
			if(((i + 1) % 5 == 0) && (i != 0))
				cout << endl;
                }
		cout << "-> fin" << endl;
        } 
	
	lista::~lista(){
		nodo* aux;
		while(vacia()){
			aux = extrInicio();
			delete aux;
		}

	}

