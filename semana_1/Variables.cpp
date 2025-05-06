// --------------------------------------------------
// Importación de librerías
// --------------------------------------------------

// Incluyo la librería iostream, que permite utilizar 
// las funciones de entrada y salida como cout y cin.
#include <iostream>

// Uso el espacio de nombres estándar (std), 
// para evitar escribir std::cout y std::cin en cada uso.
using namespace std; 

// --------------------------------------------------
// Función principal
// --------------------------------------------------
int main() {
    // Declaro una variable de tipo string para almacenar el nombre del usuario.
    string usuario;

    // Solicito al usuario que ingrese su nombre.
    cout << "Dame tu nombre: ";
    
    // Capturo la entrada del usuario.
    cin >> usuario;
    
    // Muestro un mensaje de bienvenida con el nombre ingresado.
    cout << "Bienvenido " << usuario;

    return 0; // Retorno 0 para indicar que el programa finalizó correctamente.
}

// --------------------------------------------------
// Conceptos sobre funciones en C++
// --------------------------------------------------

// Una función es un bloque de código que se ejecuta cuando se llama.
// Las funciones pueden o no retornar un valor.

// Cuando una función no retorna nada, se usa "void".
// Si la función retorna un valor, se indica el tipo de dato que devuelve.