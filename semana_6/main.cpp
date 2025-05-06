#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int input = 0;
    bool flag = true;

    int i = 0;


    // Definir el tamaño del arreglo
    int size = 3;                                            
    int numeros[size]; // Tamaño del arreglo de numeros -> [4,8,12]
    int suma = 0;                                           


    do {
        cout << "Ingrese una opción: "<< endl;
        cout << "1. Suma de numeros" << endl;
        cout << "2. Resta de numeros" << endl;
        cout << "3. Salir del sistema" << endl;
        cin >> input;

        // Alcance /  Scope
        switch (input) {
            case 1:
                cout << "Ingrese 3 numeros: " << endl;
                
                
                for (i = 0; i < size; i++) {
                    cout << "Numero " << i + 1 << "?: ";
                    cin >> numeros[i]; // Guardar el número en el arreglo
                    suma += numeros[i]; // Sumar el número al total
                }
                
                cout << "La suma de los numeros es: " << suma << endl;
                suma = 0; // Reiniciar la suma para la próxima iteración
                break;                
            case 2:
       
                break;
            case 3:
                cout << "Saliendo del sistema..." << endl;
                flag = false; // Cambia la bandera para salir del bucle
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
        
        system("pause"); // Pausar la consola (solo en Windows)
        system("cls"); // Limpiar la consola (solo en Windows)
    } while (flag);



    return 0;
}
