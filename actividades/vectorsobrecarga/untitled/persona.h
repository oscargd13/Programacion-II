#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona
{
public:
    Persona(string const & t);

     virtual void print() const;

protected:
    string type;
};

#endif // PERSONA_H
