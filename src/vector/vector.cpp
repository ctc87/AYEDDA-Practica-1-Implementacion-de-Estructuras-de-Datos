// fichero vector.hpp

#include "vector.hpp"

	vector::vector():
	dato(NULL),
	numPos(0)
	{

	}

	vector::vector(unsigned sz):
        dato(NULL),
        numPos(sz)
	{
        dato = new tipoDato[sz];
	} 


	vector::vector(const vector &vect):
		dato(NULL),
		numPos(0)
	{
		dato = new tipoDato[vect.numPos];
		numPos = vect.numPos;
		for(unsigned i = 0; i < vect.numPos; i++)
			dato[i] = vect.dato[i];
	}

	unsigned vector::size(){
		return(numPos);
	}
	

	void vector::reSize(unsigned sz) {
		if(dato == NULL) {
			dato = new tipoDato[sz];
			numPos = sz;
		} else {
			vector aux = vector(sz);
			for(unsigned i = 0; i < sz; i++) {
				aux.dato[i] = dato[i];
			}
			delete [] dato;
			dato = NULL;
			dato = new tipoDato[sz];
			numPos = sz;
			for(unsigned i = 0; i < numPos; i++)
                	dato[i]=aux[i];
		}
	}

	bool vector::empty() {
		return(numPos == 0);
	}

	
	vector vector::operator +(const vector& explicito){
		vector aux2(numPos + explicito.numPos);
		for(unsigned i = 0; i < aux2.numPos; i++) {
			if(i<numPos)
				aux2[i] = dato[i];
			else
				aux2[i] = explicito.dato[i - numPos];
		} 
		return(aux2);
	}	


        
	tipoDato& vector::operator [](const unsigned nIndex) {
		if(numPos>=nIndex) {
			return(dato[nIndex]);
		}
	}
	    
	  
	vector::~vector() {
		if(dato != NULL) {
			delete [] dato;
			dato = NULL;
		}
	}
