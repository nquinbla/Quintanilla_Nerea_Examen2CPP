#include <iostream>
#include <string>
#include <vector>
#include <stexcept>

using namespace std;

// Estructura llamada Estudiante
struct Estudiante
{
    string nombre;
    int edad;
    float promedio;
    vector<string> materias;
};

// Función mostrar un Estudiante
void mostrarEstudiante(Estudiante estudiante)
{
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
    cout << "Materias: " << endl;
    for (int i = 0; i < estudiante.materias.size(); i++)
    {
        cout << estudiante.materias[i] << endl;
    }
}