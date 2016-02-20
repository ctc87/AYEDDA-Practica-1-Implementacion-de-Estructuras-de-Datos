// fichero app.cpp

#include "cola.hpp"
#define MAX 20 
int main(void){
	
	cola c;
	for(unsigned i = 0; i<MAX; i++){
		c.encolar(i + 1);
	}
	c.imprimirCola();
	c.invertir();
	c.imprimirCola();
	c.invertir();
	c.imprimirCola();
	tipoDato n = 100;
	c.encolar(n);
	c.imprimirCola();
	n = c.desencolar();
	c.imprimirCola();
	cout << "debug" << endl;
	c.colarPrimeraPos(9);
	c.imprimirCola();

}

