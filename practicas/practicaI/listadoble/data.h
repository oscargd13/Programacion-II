#ifndef DATA_H
#define DATA_H

#include<iostream>
using namespace std;

class Data
{
public:

    Data(int value);

    int getValue() const;
    void setValue(int value);
    void print();

private:
    int value;
};

#endif // DATA_H
