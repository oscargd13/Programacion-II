#include "find.h"

Find::Find(string nom, float num):
    nombre{nom},
    numero{num}
{

}

string Find::getNombre() const
{
    return nombre;
}

void Find::setNombre(const string &value)
{
    nombre = value;
}

float Find::getNumero() const
{
    return numero;
}

void Find::setNumero(float value)
{
    numero = value;
}


Find &Find::operator ++()
{
    numero++;
    return *this;
}

Find &Find::operator --()
{
    numero--;
    return *this;
}

bool operator >(const Find &n1, const Find &n2)
{
     return (n1.getNumero() > n2.getNumero());
}

bool operator >=(const Find &n1, const Find &n2)
{
   return (n1.getNumero() >= n2.getNumero());
}

bool operator <(const Find &n1, const Find &n2)
{
    return (n1.getNumero() < n2.getNumero());
}

bool operator <=(const Find &n1, const Find &n2)
{
   return (n1.getNumero() <= n2.getNumero());
}

bool operator ==(const Find &n1, const Find &n2)
{
   return (n1.getNumero() == n2.getNumero());
}

bool operator !=(const Find &n1, const Find &n2)
{
    return (n1.getNumero() != n2.getNumero());
}

ostream &operator<<(ostream &os, const Find &p)
{
    os << " Nombre: " << p.getNombre() << "  Posicion: " << p.getNumero();
    return os;
}
