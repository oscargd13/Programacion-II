#ifndef AGENDA_H
#define AGENDA_H
#include <vector>
#include <contacto.h>
#include <iostream>
using namespace std;

class Agenda
{
public:
    Agenda();

    bool addContacto(Contacto c);
    bool eliminarContacto(Contacto c);
    int buscarContacto(Contacto c);
    bool modificarContacto(Contacto c);
    bool mostrarContacto(Contacto c);

private:
    vector<Contacto> lista;
};

#endif // AGENDA_H
