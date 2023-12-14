// 1. Estructura del estudiante con C
// 2. Registro de Asistencia con C
// 3. Manejo de excepciones con C

#include <iostream>

// a. Estructura llamada Estudiante con los campos: nombre, edad, y promedio.
struct Estudiante
{
    char nombre[30];
    int edad;
    float promedio;
};

// b. Función mostrarEstudiante() que muestre todos los campos de la estructura.
void mostrarEstudiante(Estudiante estudiante)
{
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %f\n", estudiante.promedio);
}
