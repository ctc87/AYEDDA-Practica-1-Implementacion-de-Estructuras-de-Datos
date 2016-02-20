
/**
 * <h1>Lista</h1>
 * Lista es una practica de la asignatura: <br/>
 * <em>Algoritmo y estructuras de datos avanzados</em> <br/>
 * Lista es una clase que representa una lista enlazada
 * que sirve para almacenar nodos del tipo predefinido
 * tipoDato a través de nodos, definidos en este mismo proyecto.
 * El almacenamiento se realiza a través de punteros
 * al inicio y al final de la lista. <br/>
 * También se almacena un natural que contiene el número de
 * nodos en la lista.
 *
 * @see tipoDato
 * @see nodo
 * @author  Carlos Troyano Carmona
 * @version 1.1
 * @since   2015-02-15
 */
#include "../nodo/nodo.hpp"

class lista {
	private:
/**
 * El número de elementos en la lista.
 */
		unsigned numNodos;

/**
 * Puntero al inicio de la lista.
 */
		nodo* inicio;

/**
  * Puntero al final de la lista.
  */
		nodo* fin;

/**
 * Función booleana vacía. Retorna verdadero si la lista
 * no contiene elementos, falso en otro caso.
 * @return bool Devuelve verdadero si la lista está vacía.
 */
	bool vacia();

	public:
/**
 * Constructor por defecto para lista. Inicializa los punteros
 * a NULL y el número de elementos a 0.
 */
	lista();

/**
 * Constructor con nodo para la lista. Inicializa el punteros con
 * el puntero al nodo pasado por parámetro y el número de elementos
 * a 1.
 * @param t Número de posiciones del vector.
 */

	lista(nodo* nodoInicial);
/**
 * Función extrInicio, extrae el primer elemento de la lista.
 *  <br/> <br/>
 *  *Para ello almacena el primer nodo en una variable auxiliar. <br/>
 *  *Después asignamos al segundo nodo como primero en la lista. <br/>
 *  *Borramos el puntero al nodo siguiente del puntero auxiliar. <br/>
 *  *Decrementa el número de elementos en la lista. <br/>
 *  *Devolvemos el puntero auxiliar.
 * @return Puntero al nodo que estaba en el inicio de la lista.
 */
	nodo* extrInicio();

/**
 *
 * Función insertarInicio, Inserta un elemento en la iníco de la lista.
 * <br/> <br/>
 * *Primero comprueba primero si está vacía. <br/>
 * 	- Si no lo está crea un puntero auxiliar y le asigna el
 * 	puntero a la primera posición de la lista. <br/>
 * 	- Seguidamente asigna al puntero auxiliar y antigua
 * 	cabeza de la lista como segundo nodo.<br/>
 *  - Si la lista esta vacía asigna el puntero nodoAInsertar a
 *  la cabeza y la cola de la lista.
 *  *Por último incrementa el número de nodos en la lista.
 *  @param nodoAInsertar nodo a insertar en la lista.
 *
 */
	void insertInicio(nodo* nodoAInsertar);
	
/**
 * Función extrFin, extrae el ultimo elemento de la lista.
 *  <br/> <br/>
 *  *Para ello almacena el último nodo en una variable auxiliar. <br/>
 *  *Después asignamos al penúltimo nodo como primero en la lista. <br/>
 *  *Borramos el puntero al nodo anterior del puntero auxiliar. <br/>
 *  *Decrementa el número de elementos en la lista. <br/>
 *  *Devolvemos el puntero auxiliar.
 * @return Puntero al nodo que estaba en el final de la lista.
 */
	nodo* extrFin();

/**
 *
 * Función insertarFin, Inserta un elemento en la cola de la lista.
 * <br/> <br/>
 * *Primero comprueba primero si está vacía. <br/>
 * 	- Si no lo está crea un puntero auxiliar y le asigna el
 * 	puntero a la cola de la lista. <br/>
 * 	- Seguidamente asigna al puntero auxiliar y antigua
 * 	cola de la lista como penúltimo nodo.<br/>
 *  - Si la lista esta vacía asigna el puntero nodoAInsertar a
 *  la cabeza y la cola de la lista.
 *  *Por último incrementa el número de nodos en la lista.
 *  @param nodoAInsertar nodo a insertar en la lista.
 *
*/
	void insertFin(nodo* nodoAInsertar);
/**
 * Función iterador, Devuelve un puntero al nodo en la posición n
 * de la lista, empezando por el principio.
 * <br/><br/>
 * *Para ello va recorriendo los nodos uno a uno desde el
 * inicio hasta la posición n. <br/>
 * *Después devuelve un puntero a ese nodo.
 * @param n Posición del nodo del cual queremos la referencia.
 * @return it Nodo en la posición n de la lista.
 */
	nodo* iterador(unsigned n);

/**
 * Función iteradorInv, Devuelve un puntero al nodo en la posición n
 * de la lista, empezando por el final.
 * <br/><br/>
 * *Para ello va recorriendo los nodos uno a uno desde el
 * final hasta la posición n. <br/>
 * *Después devuelve un puntero a ese nodo.
 * @param n Posición del nodo del cual queremos la referencia.
 * @return it Nodo en la posición n de la lista.
 */
	nodo* iteradorInv(unsigned n);

/**
 * Función imprimirLista. Imprime la lista en formato: <br/>
 * <em>
 *  inicio --> [d1] --> [d2] --> ... [dn] --> fin <br/>
 *  Donde d es un dato y n es el último dato de la lista.
 * </em>
*/
	void imprimirLista();

 /**
  * Función destructora, borra la memoria asignada
  * dinámicamente a los nodos.
  */
	~lista();

};
