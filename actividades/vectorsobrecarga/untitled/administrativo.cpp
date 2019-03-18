#include "administrativo.h"

Administrativo::Administrativo(string n, string d, int s):
    Persona{"Administrativo"},
    nombre{n},
    dni{d},
    salario{s}
{

}

string Administrativo::getNombre() const
{
    return nombre;
}

void Administrativo::setNombre(const string &value)
{
    nombre = value;
}

string Administrativo::getDni() const
{
    return dni;
}

void Administrativo::setDni(int value)
{
    dni = value;
}

int Administrativo::getSalario() const
{
    return salario;
}

void Administrativo::setSalario(int value)
{
    salario = value;
}

void Administrativo::print() const
{
    cout << type << ": " << getNombre() << ", dni: " << getDni() <<
            ", gana " << getSalario() << " euros al mes." << endl;
}aw

