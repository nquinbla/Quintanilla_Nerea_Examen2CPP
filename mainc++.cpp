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

// Función para agregar materia a un Estudiante
void agregarMateria(Estudiante &estudiante, string materia)
{
    estudiante.materias.push_back(materia);
}

// Función para eliminar materia de un Estudiante
void eliminarMateria(Estudiante &estudiante, string materia)
{
    for (int i = 0; i < estudiante.materias.size(); i++)
    {
        if (estudiante.materias[i] == materia)
        {
            estudiante.materias.erase(estudiante.materias.begin() + i);
            return;
        }
    }
    throw invalid_argument("La materia no existe");
}

// Estructura Asistencia
struct Asistencia
{
    string materia;
    int asistencias;
    int faltas;
};

// Función para registrar asistencia de un estudiante
void registrarAsistencia(Estudiante &estudiante, Asistencia asistencia)
{
    for (int i = 0; i < estudiante.materias.size(); i++)
    {
        if (estudiante.materias[i] == asistencia.materia)
        {
            estudiante.materias.erase(estudiante.materias.begin() + i);
            return;
        }
    }
    throw invalid_argument("La materia no existe");
}

