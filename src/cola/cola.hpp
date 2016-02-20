/**
 * <h1>Cola</h1>
 * Cola es una practica de la asignatura: <br/>
 * <em>Algoritmo y estructuras de datos avanzados</em> <br/>
 * Cola es una clase que sirve para almacenar datos,
 * del tipo predefinido tipoDato a través de nodos,
 * definidos en este mismo proyecto. El almacenamiento
 * se realiza con el algoritmo FIFO. A través de punteros
 * al primer y último elementos de la cola. <br/>
 * También se almacena un natural que contiene el número de
 * elementos en la cola.
 *
 * @see tipoDato
 * @see nodo
 * @author  Carlos Troyano Carmona
 * @version 1.1
 * @since   2015-02-15
 */

#include "../nodo/nodo.hpp"
class cola {
	private:
/**
 * El número de elementos en la cola.
 */
		unsigned numElementos;
/**
 * Puntero al primer elemento de la cola.
 */
		nodo*	 primero;

/**
 * Puntero al último elemento de la cola.
 */
		nodo*	 ultimo;

/**
 * Función booleana vacía. Retorna verdadero si la cola
 * no contiene elementos, falso en otro caso.
 * @return bool Devuelve verdadero si la cola está vacía.
 */
		bool vacia();

	public:
/**
 * Constructor por defecto para cola. Inicializa los punteros
 * a NULL y el número de elementos a 0.
 */
		cola();
/**
 * Función encolar, Inserta un elemento en la cola.
 * <br/> <br/>
 * *Para ello primero asigna el dato pasado por parámetro a
 * un puntero nodoAEncolar de la clase nodo. <br/>
 * *Después comprueba primero si está vacía. <br/>
 * 	- Si no lo está crea un puntero auxiliar y le asigna el
 * 	puntero a la última posición de la cola. <br/>
 * 	- Después asigna el puntero nodoAEncolar la última posición. <br/>
 * 	- Seguidamente asigna el puntero auxiliar al penúltimo
 * 	elemento. <br/>
 *  - Si la cola esta vacía asigna el puntero nodoAEncolar a
 *  la ultima y la primera posición de la cola.
 *  *Por último incrementa el número de elementos en la cola.
 *  @param dato Dato a insertar en la cola.
 *
 */
		void encolar(tipoDato dato);

/**
 * Función Desencolar, extrae el primer elemento de la cola.
 *  <br/> <br/>
 *  *Para ello asignamos el primer elemento un puntero auxiliar. <br/>
 *  *Después borramos el primer elemento y asignamos el
 *  segundo elemento al primero. <br/>
 *  *Borramos el puntero al nodo siguiente. <br/>
 *  *Decrementa el número de elementos en la cola. <br/>
 *  *Devolvemos el dato en el puntero auxiliar.
 * @return Dato almacenado en el nodo que estaba en el puntero
 * de la cola.
 */
		tipoDato desencolar();
/**
 * Función invertir, invierte la cola completamente el último
 * pasa a ser el primero y viceversa.
 *  <br/> <br/>
 *  *Para ello invierte los punteros al nodo anterior
 *  por el del nodo siguiente. A través de variables
 *  auxiliares hasta recorrer toda la cola. <br/>
 *  *Después intercambia los punteros al primer y ultimo elemento.
 *  de la cola. <br/>
 */
		void invertir();
/*
 * Función colar a primera posición, Indica mediante
 * la posición actual de un elemento en la cola que este
 * sea puesto en Primera posición. <br/>
 * *Extrae el puntero del elemento a poner en primera posición
 * y sobrescribe todos los punteros siguiente y anterior
 * implicados en al extracción. <br/>
 * *Después invierte la cola. <br/>
 * *Pone en cola el elemento. <br/>
 * *Por último vuelve a invertirla para que este quede como el
 *  primer elemento.
 *  @param posActual posición actual del elemento a colar a
 *  primera posición.
 */
		void colarPrimeraPos(unsigned posActual);

/**
 * Función imprimirCola. Imprime la cola en formato: <br/>
 * <em>
 *  primero --> [d1] --> [d2] --> ... [dn] --> último <br/>
 *  Donde d es un dato y n es el último dato de la cola.
 * </em>
*/
		void imprimirCola();

/**
 * Función destructora, borra la memoria asignada
 * dinámicamente a los nodos.
 */
		~cola();
};








