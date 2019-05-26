#include "data.h"

Data::Data(int value):
    value{value}
{

}

int Data::getValue() const
{
    return value;
}

void Data::setValue(int value)
{
    value = value;
}

void Data::print()
{
  cout << value;
}
