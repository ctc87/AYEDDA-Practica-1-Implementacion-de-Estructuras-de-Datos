
/**
 * <h1>Vector</h1>
 * Vector es una practica de la asignatura: <br/>
 * <em>Algoritmo y estructuras de datos avanzados</em> <br/>
 * Vector es una clase que sirve para almacenar datos,
 * del tipo predefinido tipoDato, de manera indexada
 * a través de números naturales.
 *
 * @author  Carlos Troyano Carmona
 * @version 1.1
 * @since   2015-02-15
*/

#include "../tipoDato/tipoDato.hpp"

class vector {
	
	private:
/**
 * El número de posiciones del vector.
*/
		unsigned numPos;
/**
 * Puntero al primer dato del vector en memoria.
*/
		tipoDato* dato; 
	

	public:


/**
 * Constructor por defecto para vector. Inicializa el puntero a NULL
 * y el número de posiciones a 0.
*/
		vector();


/**
 * Constructor con tamaño para vector. Inicializa el puntero a NULL
 * y el número de posiciones a sz. Pero después Reserva memoria
 * con new a través del puntero para el número de posiciones
 * pertinente.
 * @param sz Número de posiciones del vector.
*/
		vector(unsigned sz);


/**
 * Constructor de copia para el vector. Inicializa el puntero
 * a NULL y el número de posiciones a 0. Después reserva
 * memoria con new para un vector del tamaño del que se pasa
 * por parámetro, del que se quiere hacer la copia. Se asigna a
 * numPos el mismo número de posiciones del vector pasado por
 * parámetro. Por último hacemos una copia posición a  posición
 * con un bucle for. <br/>
 * Esto se hace para evitar el problema al copiar objetos de
 * memoria dinámica descrito en la tutoría de clases pertinente.
 * @param vect Objeto del tipo vector del que se quiere hacer
 * la copia.
*/
		vector(const vector &vect);


/**
 * {@link vector#numPos}
*/
		unsigned size();


/**
 * Este método permite redimensionar el vector a un nuevo tamaño.
 * Es necesario mencionar que si el tamaño es menor se trunca
 * por la derecha. <br/>
 * ejemplo: <br/>
 * <em>
 *   vector[d1][d2][d3]...[dn]-> vector[d1][d2][d3]...[dm] <br/>
 *   Donde d es un dato n es el antiguo tamaño y m el nuevo. <br/>
 * </em>
 * <br/>
 * El proceso se hace creando un vector auxiliar y copiando dato
 * a dato los contenidos en el vector original. Liberamos la
 * memoria reservada con delete y reservamos memoria de nuevo
 * para el nuevo tamaño por ultimo copiamos posición a posición
 * desde el vector auxiliar a nuestro objeto en la nueva zona de
 * memoria reservada. En caso de no tener datos se inicializa,
 * con new y se le asigna el tamaño sz a numPos.
 * @param sz  Nuevo tamaño para el vector.
*/
		void reSize(unsigned sz);


/**
 * Este es un método booleano que devuelve verdadero
 * si el vector esta vácio y false si contiene algún
 * dato.
 * @return bool retorna true si está vacía, false si en otro caso.
*/
		bool empty();


/**
 * Sobrecarga del operador suma. Lo que hace esta clase al sumar
 * es concatenar al sumando izquierdo el sumando derecho. <br/>
 * Cabe destacar que la concatenación se realiza por la derecha. <br/>
 * ejemplo: <br/>
 * <em>
 *   vector[d1][d2][d3]...[dn] + vector[f1][f2][f3]...[dm] =
 *   vector[d1][d2][d3]...[dn][f1][f2][f3]...[fm] <br/>
 *   Donde d y f son datos y n y m los tamaños de los
 *   vectores a sumar. <br/>
 * </em>
 *  <br/>
 * Se crea un vector auxiliar del tamaño del vector los
 * dos vectores participes en la suma. Después se
 * vuelcan los datos del vector izquierdo en el primer
 * segmento del vector y los del vector derecho en el segundo
 * a través de un bucle for y un if.
 * @param explicito sumando derecho;
 * @return vector vector que contiene ambos concatenados.
*/
		vector operator +(const vector& explicito);
		
/**
 * Sobrecarga del operador indexación. Sobrecargamos el operador
 * []: indexación, para poder acceder al dato apuntado por dicho
 * índice. <br/>
 * ejemplo: <br/>
 * <em>
 *   vector[d1][d2][d3]...[dn] -> vector[2] accede a
 *   al segundo dato en la memoria reservada dinámicamente.
 *   y no a un elemento [2] de un array de objetos vector. <br/>
 *   Donde d es un dato y n el tamaño del vector. <br/>
 * </em>
 * <br/>
 * Se retorna el dato de la memoria dinámicamente reservado
 * en esa posición.
 * @param nIndex Número de índice de la posición a la que
 * se quiere acceder;
 * @return tipoDato Retorna el dato en la posición indicada.
*/
		tipoDato& operator [](const unsigned nIndex);
		
/**
 * Destructor, libera la memoria reservada dinámicamente
 * por el objeto con delete.
*/
		~vector();

};
