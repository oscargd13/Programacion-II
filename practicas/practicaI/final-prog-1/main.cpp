#include <iostream>
#include <contacto.h>
#include <agenda.h>
using namespace std;


void leerDatos (string &nombre, string &apellido, string &apellido2, long int & fijo, long int & movil);
int main()
{

    string nombre, apellido, apellido2;
    long int fijo, movil;
    Agenda agenda;
    bool salir=false;


   int opcion;
   do{
      cout << "1. Buscar"<< endl;
      cout << "2. Add contacto"<< endl;
      cout << "3. Salir"<<endl;
      cout << "Opcion : "; cin >> opcion;

      switch(opcion){
      case 1:{
          leerDatos(nombre,apellido,apellido2,fijo,movil);
          Contacto contacto(nombre,apellido,apellido2,fijo,movil);
          if(!agenda.buscarContacto(contacto)){
              cout << "El contacto no existe!!!" << endl;
          }
          else{
              salir=false;
              do{
                  cout << "1. Eliminar"<< endl;
                  cout << "2. Modificar"<< endl;
                  cout << "3. Mostrar" << endl;
                  cout << "4. Volver"<<endl;
                  cout << "Opcion : "; cin >> opcion;
                  switch(opcion){
                  case 1:
                      agenda.eliminarContacto(contacto);
                      break;
                  case 2:
                      agenda.modificarContacto(contacto);
                      salir=true;
                      break;
                  case 3:
                      agenda.mostrarContacto(contacto);
                      salir=true;
                      break;
                  case 4:
                      salir=true;
                      break;
                  }
              }while (!salir);
          }
      }
          break;
      case 2:{
           leerDatos(nombre,apellido,apellido2,fijo,movil);
           Contacto contacto(nombre,apellido,apellido2,fijo,movil);
           if (agenda.addContacto(contacto)){
               cout << "EL contacto ya existe en la agenda " << endl;
           }
      }
          break;

      }

   }while(opcion!=3);



    return 0;
}


void leerDatos (string &nombre, string &apellido, string &apellido2, long int & fijo, long int & movil){
    cout << " Nombre:"<< endl; cin>> nombre;
    cout << " Apellido:"<< endl; cin>> apellido;
    cout << " Segundo Apellido:"<< endl; cin>> apellido2;
    cout << " Fijo:"<< endl; cin>>fijo;
    cout << " Movil:"<< endl; cin>>movil;

}
