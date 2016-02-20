
#include "pila.hpp"
#define MAX 20 
int main(void){
	
	pila c;
	for(unsigned i = 0; i<MAX; i++){
		c.push(i+1);
	}
	cout << "Imprimiendo ";
	c.imprimirpila();
	cout << "Invertimos la  ";
	c.invertir();
	c.imprimirpila();
	cout << "Volvemos a invertir la  ";
	c.invertir();
	c.imprimirpila();
	tipoDato n = 100;
	c.push(n);
	cout << "Metemos un dato en la ";
	c.imprimirpila();
	n = c.pop();
	cout << "Sacamos un dato en la ";
	c.imprimirpila();



}

