#include "estudiante.h"

Estudiante::Estudiante(string n, string d, int g):
    Persona{"Estudiante"},
    nombre{n},
    dni{d},
    grado{g}
{

}

string Estudiante::getNombre() const
{
    return nombre;
}

void Estudiante::setNombre(const string &value)
{
    nombre = value;
}

string Estudiante::getDni() const
{
    return dni;
}

void Estudiante::setDni(int value)
{
    dni = value;
}

int Estudiante::getGrado() const
{
    return grado;
}

void Estudiante::setGrado(int value)
{
    grado = value;
}

void Estudiante::print() const
{
    cout << type << ": " << getNombre() << ", dni: " << getDni() <<
            ", grado " << getGrado() << " de carrera." << endl;
}

vector<string> Estudiante::getAsignaturase() const
{
    return asignaturase;
}

void Estudiante::setAsignaturase(const vector<string> &value)
{
    asignaturase = value;
}
