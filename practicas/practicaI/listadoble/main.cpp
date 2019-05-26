#include <iostream>
#include "data.h"
#include "list.h"
#include "node.h"

using namespace std;

int main()
{
    List milistita;
    milistita.push_back(new Data(4));
    milistita.push_front(new Data(9));
    milistita.push_back(new Data(6));
    milistita.push_back(new Data(2));

    cout << milistita;


    return 0;
}
