/**
 * Fichero main.cpp.
*/
#include "vector.hpp"
int main(void) {
	const int TAMANYO = 6;

/** Declaramos vectores con el constructor por defecto. */
	vector v,f,j;
	cout << "Tamaño del vector " << v.size()<<"."<<endl;

/** Los redimensionamos. */
	v.reSize(TAMANYO);
    f.reSize(TAMANYO);
	j.reSize(TAMANYO);
	cout << "Tamaño del vector " << v.size()<<"."<<endl;

/** Rellenamos dos de ellos con datos. */
	for(unsigned i = 0; i<v.size(); i++){
		v[i]=7;
		j[i]=i;
	}

/** Comprobamos si efectivamente tienen o no datos. */
	if(v.empty())
		cout<<"vacío"<<endl;
	else
		cout<<"no vacío"<<endl;
    if(f.empty())
        cout<<"vacío"<<endl;
    else
       cout<<"no vacío"<<endl;

/** Probamos la sobrecarga de la suma "concatenación a la derecha". */
    vector r = v + f;
    cout << "tamaño r " << r.size() <<endl;

/** Mostramos el contenido de los sumandos y de la concatenación. */
	cout << "f: " << endl;
    for(unsigned i = 0; i<f.size(); i++){
    	cout << "f[" << i << "] = " << f[i] << endl;
	}

    cout << "v: " << endl;
    for(unsigned i = 0; i<v.size(); i++){
    	cout << "v[" << i << "] = " << v[i] << endl;
    }

    cout << "suma f+v: " << endl;
    for(unsigned i = 0; i<r.size(); i++){
    	cout << "r[" << i << "] = " << r[i] << endl;
    }

/** Redimensionamos a la mitad para probar el truncado por la derecha. */
    r.reSize(TAMANYO);

/** Mostramos el vector después del truncado por la derecha. */
	cout << "suma f+v después del resize menor: " << endl;
        for(unsigned i = 0; i<r.size(); i++){
                cout << "r[" << i << "] = " << r[i] << endl;
        }
}
