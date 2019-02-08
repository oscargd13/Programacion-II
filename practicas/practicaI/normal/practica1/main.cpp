#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class FiguraGeometrica
{
public:
    virtual float getArea()  const= 0;
    virtual float getPerimetro() const = 0;

};
class Circulo: public FiguraGeometrica{
private:
    int radio;
public:
    Circulo(int r):radio{r}{}
    float getArea()const{
        return 3.14 * radio * radio;}
    float getPerimetro()const{
        return 2 * 3.14 * radio;
    }
    float getDiagonal(){
        return radio * 2;
    }
};

class Cuadrado: public FiguraGeometrica{
private:
    int lado;
public:
    Cuadrado(int l):lado{l}{}
    float getArea()const {
        return lado*lado;}
    float getPerimetro()const{
        return lado * 4;
    }
    float getDiagonal(){
        return sqrt(lado*lado + lado*lado);
    }
};

class TrianguloEquilatero: public FiguraGeometrica{
private:
    int base, altura, lado;
public:
    TrianguloEquilatero(int a, int b, int l):base{a}, altura{b}, lado{l}{}
    float getArea()const {
        return 0.5*base*altura;}
    float getPerimetro()const{
        return base * 3;
    }
    float getAltura(){
        altura = sqrt(base*base + lado*lado);
        return altura;
    }

};

int main(){

    string figura;
    int base, lado, radio, altura;



    cout << "Que figura desea añadir?";
    cin >> figura;
    if(figura == "triangulo"){
        cout << "Cuanto vale la base?" << endl;
        cin >> base;
        cout << "Cuanto vale la altura?" << endl;
        cin >> altura;
        TrianguloEquilatero miTriangulito(base, altura,lado);
        cout << "Esta es tu area: " << miTriangulito.getArea() << endl;


        cout << "Que figura desea añadir?";
        cin >> figura;
        if(figura == "cuadrado"){
            cout << "Cuanto vale el lado?" << endl;
            cin >> lado;
            Cuadrado miCuadradito(lado);
            cout << "Esta es tu area: " << miCuadradito.getArea() << endl;


            cout << "Que figura desea añadir?";
            cin >> figura;
            if(figura == "circulo"){
                cout << "Cuanto vale el radio?" << endl;
                cin >> radio;
                Circulo miCirculito(radio);
                cout << "Esta es tu area: " << miCirculito.getArea() << endl;
            }
        }


    }
    return 0;
}

