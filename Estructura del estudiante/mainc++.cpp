// 1. Estructura del estudiante con C++
// a. Implementa una estructura llamada Estudiante con los campos: nombre, edad, y promedio.
// b. Desarrolla la función mostrarEstudiante() que muestre todos los campos de la estructura.

#include <iostream>
#include <string>

using namespace std;

// a. Estructura llamada Estudiante con los campos: nombre, edad, y promedio.

struct Estudiante
{
    string nombre;
    int edad;
    float promedio;
};

// b. Función mostrarEstudiante() que muestre todos los campos de la estructura.

void mostrarEstudiante(Estudiante estudiante)
{
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}
