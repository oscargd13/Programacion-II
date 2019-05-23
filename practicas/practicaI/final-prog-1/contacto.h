#ifndef CONTACTO_H
#define CONTACTO_H
#include <string>
using namespace std;

class Contacto
{
public:
    Contacto(string nombre, string apellido, string apellido2, long int  fijo, long int  movil);
    string getNombre() const;
    void setNombre(const string &value);

    string getApellido() const;
    void setApellido(const string &value);

    string getApellido2() const;
    void setApellido2(const string &value);

    long getFijo() const;
    void setFijo(long value);

    long getMovil() const;
    void setMovil(long value);



private:
    string nombre, apellido, apellido2;
    long int fijo, movil;
};

#endif // AGENDA_H
