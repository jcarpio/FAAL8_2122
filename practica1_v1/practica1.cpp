// practica1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//



#include <iostream>
#include "Operaciones.h"
#include "TestAlgoritmo.h"
#include "Constantes.h"

using namespace std;
TestAlgoritmo testAlgoritmo;

int main()
{
    Operaciones cjt;
    cjt.Vaciar();
    int opcion = 1;
    int opcion2 = 1;
    int opcion3 = 1;

    while (opcion != 0)
    {
        system("cls");
        cout << "*** FAA. Practica 1. Curso 21/22 ***" << endl << endl;
        cout << "                                       Jose Carpio" << endl << endl;
        cout << "*** Estudio de la Complejidad del Algoritmo de Busqueda Secuencial ***" << endl << endl;
        cout << "Opciones: " << endl;
        cout << "\n1.- Estudio Teorico.";
        cout << "\n2.- Estudio Empirico. ";
        cout << "\n0.- Salir\n" << endl;
        cin >> opcion;
        switch (opcion) {
        case 0: break;
        case 1: {
            system("cls");
            cout << "*** MENU TEORICO DEL ALGORITMO DE BUSQUEDA SECUENCIAL ***" << endl << endl;          
            cout << "Opciones: " << endl;
            cout << "\n1.- Probar el algoritmo de busqueda secuencial.";
            cout << "\n2.- Obtener los casos del metodo de busqueda secuencial. ";
            cout << "\n3.- Comprobar los casos. ";
            cout << "\n0.- Volver al menu principal\n" << endl;
            cout << "\n---------------\n" << endl;
            cout << "\nElige opcion: " << endl;
            cin >> opcion2;
            switch (opcion2) {
               case 0: break;
               case 1: {
                   testAlgoritmo.comprobarAlgoritmo();
               } break;
               case 2: {
                   system("cls");
                   cout << "Opciones: " << endl;
                   cout << "\n1.- Caso peor.";
                   cout << "\n2.- Caso medio. ";
                   cout << "\n3.- Caso mejor. ";
                   cout << "\n0.- Volver al menu principal\n" << endl;
                   cout << "\n---------------\n" << endl;
                   cout << "\nElige opcion: " << endl;
                   cin >> opcion3;
                   switch (opcion3) {
                   case 0: break;
                   case 1: { testAlgoritmo.costeCasoTeorico(SECUENCIALPEOR); } break;
                   case 2: { testAlgoritmo.costeCasoTeorico(SECUENCIALMEDIO); } break;
                   case 3: { testAlgoritmo.costeCasoTeorico(SECUENCIALMEJOR); } break;
                   }
                   
               } break;
               case 3: {
                   testAlgoritmo.compararTeorico(0, 1, 2);
               } break;            
            }

            break;
        }
        case 2: {
            system("cls");
            cout << "*** MENU EMPIRICO DEL ALGORITMO DE BUSQUEDA SECUENCIAL ***" << endl << endl;
            cout << "Opciones: " << endl;
            cout << "\n1.- Probar el algoritmo de busqueda secuencial.";
            cout << "\n2.- Obtener los casos del metodo de busqueda secuencial. ";
            cout << "\n3.- Comprobar los casos. ";
            cout << "\n0.- Volver al menu principal\n" << endl;
            cout << "\n---------------\n" << endl;
            cout << "\nElige opcion: " << endl;
            cin >> opcion2;
            switch (opcion2) {
            case 0: break;
            case 1: {} break;
            case 2: {} break;
            case 3: {} break;
            }

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
