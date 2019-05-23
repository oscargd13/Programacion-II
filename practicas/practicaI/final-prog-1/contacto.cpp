#include "contacto.h"

Contacto::Contacto(string nombre, string apellido, string apellido2, long int  fijo, long int  movil):
    nombre{nombre},
    apellido{apellido},
    apellido2{apellido2},
    fijo{fijo},
    movil{movil}
{

}

string Contacto::getNombre() const
{
    return nombre;
}

void Contacto::setNombre(const string &value)
{
    nombre = value;
}

string Contacto::getApellido() const
{
    return apellido;
}

void Contacto::setApellido(const string &value)
{
    apellido = value;
}

string Contacto::getApellido2() const
{
    return apellido2;
}

void Contacto::setApellido2(const string &value)
{
    apellido2 = value;
}

long Contacto::getFijo() const
{
    return fijo;
}

void Contacto::setFijo(long value)
{
    fijo = value;
}

long Contacto::getMovil() const
{
    return movil;
}

void Contacto::setMovil(long value)
{
    movil = value;
}
