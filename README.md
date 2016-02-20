
<img src="./img/cplus.png" width="20%" style="float:right">

# Práctica 1 Implementación de Estructuras de Datos

## Repositorio AYEDDA-practica1-contenedores-vector

El objetivo de esta práctica es tomar contacto con el entorno de desarrollo que se utilizará
durante el cuatrimestre, y realizar un repaso de las estructuras de datos estudiadas en cursos
anteriores. A través de la implmentacion de varias estructiras de datos.

* author  Carlos Troyano Carmona
* version 1.1
* since   2015-02-15


### Vector
Vector es una clase que sirve para almacenar datos, del tipo predefinido tipoDato, de manera indexada
a través de números naturales.
* [Cabeceras  documentadas](https://github.com/ctc87/AYEDDA-Practica-1-Implementacion-de-Estructuras-de-Datos/blob/gh-pages/src/vector/vector.hpp)

### Lista
Lista es una clase que representa una lista enlazada, que sirve para almacenar nodos del tipo predefinido
tipoDato a través de nodos, definidos en este mismo proyecto al inicio y al final de la lista. <br/>
El almacenamiento se realiza a través de punteros. También se almacena un natural que contiene el número de
nodos en la lista.
* [Cabeceras  documentadas](https://github.com/ctc87/AYEDDA-Practica-1-Implementacion-de-Estructuras-de-Datos/blob/gh-pages/src/lista/lista.hpp)

### Pila
Pila es una clase que sirve para almacenar datos, del tipo predefinido tipoDato a través de nodos,
definidos en este mismo proyecto. El almacenamiento se realiza con el algoritmo LIFO. A través de un puntero
a la cima de la pila. Se implementa también un puntero a la base de la pila para poder invertir la pila.<br/>
También se almacena un natural que contiene el número de elementos en la pila.
* [Cabeceras  documentadas](https://github.com/ctc87/AYEDDA-Practica-1-Implementacion-de-Estructuras-de-Datos/blob/gh-pages/src/pila/pila.hpp)

### Cola
Cola es una clase que sirve para almacenar datos, del tipo predefinido tipoDato a través de nodos,
definidos en este mismo proyecto. El almacenamiento se realiza con el algoritmo FIFO. A través de punteros
al primer y último elementos de la cola. <br/>
También se almacena un natural que contiene el número de elementos en la cola.
* [Cabeceras  documentadas](https://github.com/ctc87/AYEDDA-Practica-1-Implementacion-de-Estructuras-de-Datos/blob/gh-pages/src/cola/cola.hpp)
