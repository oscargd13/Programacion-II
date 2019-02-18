#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    Vector v1{1, 2};
    Vector v2{3, 2};

    Vector v3 = v1 + v2; // {4, 4}

    cout << "Hello World!" << endl;
    return 0;
}
