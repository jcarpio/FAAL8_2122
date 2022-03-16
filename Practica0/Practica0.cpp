// Practica0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Operaciones.h"

using namespace std;

int main()
{
    Operaciones cjt;
    cjt.Vaciar();
    int opcion = 1;
    while (opcion != 0)
    {
        system("cls");
        cout << "Aplicacion operaciones con arrays" << endl << endl;
        cout << "Opciones: " << endl;
        cout << "\n1.- Insertar_valores.";
        cout << "\n2.- Buscar un valor en el vector. ";
        cout << "\n3.- Mostrar_vector.";
        cout << "\n4.- Ordenar_vector.";
        cout << "\n5.- Vaciar vector.";
        cout << "\n0. -Salir\n" << endl;
        cin >> opcion;
        switch (opcion) {
        case 0: break;
        case 1: {
            int valor;
            cout << "Insertar el valor ";
            cin >> valor;
            cjt.Insertar(valor);   // lo almacena en el array 
            cout << "Insertado el " << valor << endl;
            break;
        }
        case 2: {
            int valor;
            cout << "Insertar el valor a buscar ";
            cin >> valor;
            cout << "Se encuentra en la posición=" << cjt.Busqueda_lineal(valor) << endl;
            break;
        }
        case 3: {
            cout << "Visualizacion del vector: " << endl;
            cjt.Visualizar(MAXIMO);
            cout << endl;
            break;
        }
        case 4: {
            cout << "Ordenacion del vector: " << endl;
            cjt.Visualizar(MAXIMO); cout << endl;
            cjt.Ordena(MAXIMO);
            cout << "Vector ordenado: " << endl;
            cjt.Visualizar(MAXIMO); cout << endl;
            break;
        }
        case 5: {
            cout << "Vaciar el vector: " << endl;
            cjt.Visualizar(MAXIMO); cout << endl;
            cjt.Vaciar();
            cout << "Vector inicializado (tamano=0): " << endl;
            cjt.Visualizar(MAXIMO); cout << endl;
            break;
        }
        default: {
            cout << "Opcion no " << opcion << " no valida. " << endl;
        }
        }
        system("pause");
    }
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
