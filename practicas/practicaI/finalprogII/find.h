#ifndef FIND_H
#define FIND_H
#include<iostream>

using namespace std;

class Find
{
public:
    Find(string nom,float num);

    string getNombre() const;
    void setNombre(const string &value);





    float getNumero() const;
    void setNumero(float value);

private:
    string nombre;
    float numero;

    Find& operator ++();
    Find& operator --();


};
bool operator > (Find const & n1, Find const & n2);
bool operator >= (Find const & n1, Find const & n2);
bool operator < (Find const & n1, Find const & n2);
bool operator <= (Find const & n1, Find const & n2);
bool operator == (Find const & n1, Find const & n2);
bool operator != (Find const & n1, Find const & n2);

ostream& operator<<(ostream& os, Find const & p);

#endif // FIND_H
