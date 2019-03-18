#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <vector>
#include "persona.h"

class Estudiante : public Persona
{
public:
    Estudiante(string n, string d, int g);

    string getNombre() const;
    void setNombre(const string &value);

    string getDni() const;
    void setDni(int value);

    int getGrado() const;
    void setGrado(int value);

    void print() const;

    vector<string> getAsignaturase() const;
    void setAsignaturase(const vector<string> &value);

private:
    string nombre;
    string dni;
    int grado;
    vector<string> asignaturase;
};

#endif // ESTUDIANTE_H
