#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
#include <vector>

class Profesor : public Persona
{
public:
    Profesor(string n, string d, int s);

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
    vector<string> asignaturasp;
};

#endif // PROFESOR_H
