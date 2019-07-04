#ifndef TABLE_H
#define TABLE_H
#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Table
{
public:
    Table();

    vector<vector<T> > getTabla() const;

    void setTabla(const vector<vector<T> > &value);

private:
    vector< vector <T> > tabla;

};
template<class T>
Table<T>::Table()
{

}
template<class T>
vector<vector<T> > Table<T>::getTabla() const
{
    return tabla;
}

template<class T>
void Table<T>::setTabla(const vector<vector<T> > &value)
{
    tabla = value;
}



#endif // TABLE_H
