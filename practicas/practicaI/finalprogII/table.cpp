#include "table.h"

Table::Table(int nu, string no):
    num{nu},
    nom{no}
{

}

int Table::getNum() const
{
    return num;
}

void Table::setNum(int value)
{
    num = value;
}

string Table::getNom() const
{
    return nom;
}

void Table::setNom(const string &value)
{
    nom = value;
}

Table &Table::operator ++()
{
    num++;
    return *this;
}

Table &Table::operator --()
{
    num--;
    return *this;
}


bool operator >(const Table &nu, const Table &no)
{
   return (nu.getNum() > no.getNum());
}

bool operator >=(const Table &nu, const Table &no)
{
   return (nu.getNum() >= no.getNum());
}

bool operator <(const Table &nu, const Table &no)
{
 return (nu.getNum() < no.getNum());
}

bool operator <=(const Table &nu, const Table &no)
{
return (nu.getNum() <= no.getNum());
}

bool operator ==(const Table &nu, const Table &no)
{
 return (nu.getNum() == no.getNum());
}

bool operator !=(const Table &nu, const Table &no)
{
  return (nu.getNum() != no.getNum());
}

ostream &operator<<(ostream &os, const Table &n)
{
    os << " Numero: " << n.getNum() << "  Posicion: " << n.getNom();
    return os;
}

