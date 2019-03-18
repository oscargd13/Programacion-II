#include "profesor.h"

Profesor::Profesor(string n, string d, int s):
    Persona{"Profesor"},
    nombre{n},
    dni{d},
    salario{s}
{

}

string Profesor::getNombre() const
{
    return nombre;
}

void Profesor::setNombre(const string &value)
{
    nombre = value;
}

string Profesor::getDni() const
{
    return dni;
}

void Profesor::setDni(int value)
{
    dni = value;
}

int Profesor::getSalario() const
{
    return salario;
}

void Profesor::setSalario(int value)
{
    salario = value;
}

void Profesor::print() const
{
    cout << type << ": " << getNombre() << ", dni: " << getDni() <<
            ", gana " << getSalario() << " euros al mes." << endl;
}
