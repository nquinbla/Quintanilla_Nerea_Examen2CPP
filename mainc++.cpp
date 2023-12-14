// 1. Estructura del estudiante con C++
// 2. Registro de Asistencia con C++
// 3. Manejo de excepciones con C++


#include <iostream>
#include <string>

using namespace std;

// 1a. Estructura llamada Estudiante con los campos: nombre, edad, y promedio.

struct Estudiante
{
    string nombre;
    int edad;
    float promedio;
};

// 1b. Función mostrarEstudiante() que muestre todos los campos de la estructura.

void mostrarEstudiante(Estudiante estudiante)
{
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}
