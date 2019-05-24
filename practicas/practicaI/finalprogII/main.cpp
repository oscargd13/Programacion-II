#include <iostream>
#include<find.h>
using namespace std;

#include <table.h>
int main()
{

    cout << "/ 3 /" << " 2 /" << " 4 /" << endl;
    cout << "/ 5 /" << " 1 /" << " 7 /" << endl << endl;

    Table n1(3, "1.1" );
    Table n2(2, "1.2" );
    Table n3(4, "1.3" );
    Table n4(5, "2.1" );
    Table n5(1, "2.2" );
    Table n6(7, "2.3" );
            cout << n1 << n2 << n3 << n4 << n5 << n6 << endl << endl;

    cout << "/ periquito /" << " perro /" << " paloma /"<< endl;
    cout << "/ tortuga /" << " gallina /" << " lechuza/" << endl;
    cout << "/ canario /" << " gato /" << " delfin /" << endl;
    cout << "/ orangutan /" << " gamusino /" << " garrapata/" << endl << endl;

    Find p1("periquito", 1.1);
    Find p2(" perro", 1.2);
    Find p3("paloma", 1.3);
    Find p4("tortuga", 2.1);
    Find p5("gallina", 2.2);
    Find p6("lechuza", 2.3);
    Find p7("canario", 3.1);
    Find p8("gato", 3.2);
    Find p9("delfin", 3.3);
    Find p10("orangutan", 4.1);
    Find p11("gamusino", 4.2);
    Find p12("garrapata", 4.3);

            cout << p1 << p2 << p3 << p4 << p5 << p6 << p7 << p8 << p9 << p10 << p11 << p12 <<endl;



   return 0;
}
