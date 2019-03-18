#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H

#include "persona.h"

class Administrativo : public Persona
{
public:
    Administrativo(string n, string d, int s);

    string getNombre() const;
    void setNombre(const string &value);

    string getDni() const;
    void setDni(int value);

    int getSalario() const;
    void setSalario(int value);

    void print() const;

private:
    string nombre;
    string dni;
    int salario;
};

#endif // ADMINISTRATIVO_H
