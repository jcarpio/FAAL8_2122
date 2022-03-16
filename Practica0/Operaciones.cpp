#include <iostream>
#include "Operaciones.h"

using namespace std;

void Operaciones::Insertar(int n)
{
    if (tamano < MAXIMO)
        datos[tamano++] = n; //pueden estar repetidos pues no se comprueba si ya est� el n
    else
        cerr << "ERROR: el conjunto esta lleno " << endl;
}

int Operaciones::Busqueda_lineal(int n)
/*
Recorre el array datos comparando el valor datos[i] con n
Pueden pasar dos cosas:
  1. Encuento el dato que estoy buscando y termina el bucle while
  2. El �ndice i es mayor que el tama�o del array (NO est� el n!)

  Si se encontr� el elemento se devuelve la posici�n en la que se encontr�
  Si no se encontr� devuelve -1

*/
{
    int i = 0;
    while (datos[i] != n && i < tamano)
    {
        i = i + 1;
    }
    if (datos[i] == n)
        return i;  // se encuentra el elemento en el array 
    else
        return -1;  // no se encuentra el elemento en el array
}

void Operaciones::Ordena(int tam)
/*
Comparo un elemento con todos los que est�n despu�s en el array
   Si est�n desordados, los intercambio
En la primera pasada el m�s peque�o del array tiene que estar en
la posici�n 0

*/
{
    for (int i = 0; i < tam - 1; i++)
        for (int j = i + 1; j < tam; j++)
            if (datos[j] < datos[i]) {
                int tmp = datos[i];
                datos[i] = datos[j];
                datos[j] = tmp;
            }
}

void Operaciones::Visualizar(int tam)
/*
Muestra los valores del array separados por coma. La comparaci�n
sirve para evitar poner una coma al final.
*/
{
    for (int i = 0; i < tam; i++)
        cout << datos[i] << (i < tam - 1 ? ", " : "\n");
}

void Operaciones::Vaciar()
{
    tamano = 0;
}
