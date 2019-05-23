#include "agenda.h"


Agenda::Agenda()
{

}

int Agenda::buscarContacto(Contacto c)
{
    for(unsigned int i=0; i<lista.size(); i++){
        Contacto x = lista.at(i);
        if(x.getNombre()==c.getNombre() && x.getApellido()==c.getApellido() && x.getApellido2()==c.getApellido2()){
            return i;
        }
    }
    return -1;
}
bool Agenda::addContacto(Contacto c)
{

    if(buscarContacto(c)==-1){
        lista.push_back(c);
        return true;
    }else{
        cout<<"El contacto ya existe!!!" << endl;
    }
    return false;
}

bool Agenda::eliminarContacto(Contacto c)
{
    int pos=buscarContacto(c);
    if(pos==-1){
        return false;
    }else{
        lista.erase(lista.begin()+pos);
        return true;
    }
}

bool Agenda::modificarContacto(Contacto c)
{
    if (eliminarContacto(c)){
        addContacto(c);
        return true;
    }else return false;
}

bool Agenda::mostrarContacto(Contacto c)
{
    int pos=buscarContacto(c);
    if(pos==-1){
        return false;
    }else{
        cout<<"Nombre: " << c.getNombre() << " Apellido: ," << c.getApellido() << " Apellido2: ," << c.getApellido2() << " Movil: ,"
           << c.getMovil() << " Fijo: ." << c.getFijo() << endl;
        return true;
    }
}
