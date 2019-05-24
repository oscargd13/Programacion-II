#ifndef TABLE_H
#define TABLE_H

#include <iostream>
using namespace std;

class Table
{
public:
    Table(int nu, string no);

    int getNum() const;
    void setNum(int value);


    string getNom() const;
    void setNom(const string &value);

private:
    int num;
    string nom;

   Table& operator ++();
   Table& operator --();


};
bool operator > (Table const & nu, Table const & no);
bool operator >= (Table const & nu, Table const & no);
bool operator < (Table const & nu, Table const & no);
bool operator <= (Table const & nu, Table const & no);
bool operator == (Table const & nu, Table const & no);
bool operator != (Table const & nu, Table const & no);

ostream& operator<<(ostream& os, Table const & n);


#endif // TABLE_H
