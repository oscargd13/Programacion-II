#include "vector.h"

Vector::Vector(float _x, float _y):
    x{_x},
    y{_y}
{

}

float Vector::getX() const
{
    return x;
}

void Vector::setX(float value)
{
    x = value;
}

float Vector::getY() const
{
    return y;
}

void Vector::setY(float value)
{
    y = value;
}

Vector operator +(const Vector &v1, const Vector &v2)
{
    float x = v1.getX() + v2.getX();
    float y = v1.getY() + v2.getY();
    Vector result{x,y};
    return result;

    // return Vector{v1.getX() + v2.getX(), v1.getY() + v2.getX()};
}

Vector operator -(const Vector &v1, const Vector &v2)
{
    float x = v1.getX() - v2.getX();
    float y = v1.getY() - v2.getY();
    Vector result{x,y};
    return result;

    // return Vector{v1.getX() + v2.getX(), v1.getY() + v2.getX()};
}

float operator *(const Vector &v1, const Vector &v2)
{
    return (v1.getX() * v2.getX()) + (v1.getY() * v2.getY());
}

bool operator ==(const Vector &v1, const Vector &v2)
{
    return( (v1.getX() == v2.getX()) && (v1.getY() == v2.getY()) ) ;
}


ostream &operator<<(ostream &os, const Vector &v)
{
    os << "x: " << v.getX() << ", y: " << v.getY();
    return os;
}
