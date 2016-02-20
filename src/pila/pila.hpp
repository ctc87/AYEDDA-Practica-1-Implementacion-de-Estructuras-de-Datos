
/**
 * <h1>Pila</h1>
 * Pila es una practica de la asignatura: <br/>
 * <em>Algoritmo y estructuras de datos avanzados</em> <br/>
 * Pila es una clase que sirve para almacenar datos,
 * del tipo predefinido tipoDato a través de nodos,
 * definidos en este mismo proyecto. El almacenamiento
 * se realiza con el algoritmo LIFO. A través de un puntero
 * a la cima de la pila. Se implementa también un puntero
 * a la base de la pila para poder invertir la pila. También
 * se almacena un natural que contiene el número de elementos
 * en la pila.
 *
 * @see tipoDato
 * @see nodo
 * @author  Carlos Troyano Carmona
 * @version 1.1
 * @since   2015-02-15
 */

#include "../nodo/nodo.hpp"

class pila {
	private:
/**
 * El número de elementos en la pila.
 */
		unsigned numElementos;

/**
 * Puntero a la cima de la pila.
 */
		nodo* top;

/**
 * Puntero a la base de la pila.
 */
		nodo* ultimo;

/**
 * Función booleana vacía. Retorna verdadero si la pila
 * no contiene elementos, false en otro caso.
 * @return bool Devuelve verdadero si la pila está vacía.
 */
		bool vacia();


	public:
/**
 * Constructor por defecto para pila. Inicializa los punteros
 * a NULL y el número de elementos a 0.
 */
		pila();
		
/**
 * Función push, Inserta un elemento en lo alto de la pila.
 * <br/> <br/>
 * *Para ello primero asigna el dato pasado por parámetro a
 * un puntero nodoAInsertar de la clase nodo. <br/>
 * *Después comprueba primero si está vacía. <br/>
 * 	- Si no lo está crea un puntero auxiliar y le asigna la
 * 	cima de la pila. <br/>
 * 	- Después asigna el puntero nodoAInsertar a la cima. <br/>
 * 	- Seguidamente asigna el puntero auxiliar al top. <br/>
 * 	- Después asigna como nodo siguiente de la cima el puntero
 * 	que se encontraba en la antigua cima de la pila. <br/>
 * 	- Por último hace la misma asignación en sentido contrario. <br/>
 *  - Si la pila esta vacía asigna el puntero nodoAInsertar a
 *  la base y a la cima de la pila. <br/>
 *  *Por último incrementa el número de elementos en la pila.
 *  @param dato Dato a insertar en la cima de la pila.
 *
 */
		void push(tipoDato dato);

/**
 * Función pop, extrae un elemento de la cima de la pila.
 *  <br/> <br/>
 *  *Para ello asignamos la cima a un puntero auxiliar. <br/>
 *  *Después borramos asignamos el segundo elemento a la cima. <br/>
 *  *Borramos el puntero al nodo siguiente. <br/>
 *  *Decrementa el número de elementos en la pila. <br/>
 *  *Devolvemos el dato en el puntero auxiliar.
 * @return Dato almacenado en el nodo que estaba en el puntero
 * de la pila.
*/
		tipoDato pop();

/**
 * Función invertir, invierte la pila completamente la cima
 * pasa a ser la base y la base pasa a ser la cima.
 *  <br/> <br/>
 *  *Para ello invierte los punteros al nodo anterior
 *  por el del nodo siguiente. A través de variables
 *  auxiliares hasta recorrer toda la pila. <br/>
 *  *Después intercambia los punteros a la cima y a la base
 *  de la pila. <br/>
 *
*/
		void invertir();
		
/**
 * Función imprimirpila. Imprime la pila en formato: <br/>
 * <em>
 *  top --> [d1] --> [d2] --> ... [dn] --> ultimo <br/>
 *  Donde d es un dato y n es el último dato de la pila.
 * </em>
*/

		void imprimirpila();

/**
 * Función destructora, borra la memoria asignada
 * dinámicamente a los nodos.
 */
		~pila();
};








