#include <iostream>
#include "table.h"
#include<vector>

using namespace std;

int main()
{
    Table<int>mipene;
    int num;
    int fila{4}, colum{5};
    for(int i{0}; i<fila; i++){
        for(int j {0}; j<colum; j++){
            cout << "posicion (" <<  i << "," << j << "): " ;
            cin >> num;
            mipene.setTabla(mipene.getTabla());
    }
    }
    return 0;

}
