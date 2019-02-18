#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

using namespace std;

class Vector
{
public:
    Vector(float _x, float _y);

    float getX() const;
    void setX(float value);

    float getY() const;
    void setY(float value);

private:
    float x,y;
};

Vector operator + (Vector const & v1, Vector const & v2);
Vector operator - (Vector const & v1, Vector const & v2);
float operator * (Vector const & v1, Vector const & v2);
bool operator == (Vector const & v1, Vector const & v2);
ostream &operator<<(ostream& os, Vector const & v);

#endif // VECTOR_H
