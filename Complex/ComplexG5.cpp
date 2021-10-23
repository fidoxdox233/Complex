
#include <iostream>
#include "Complex.h"
using namespace arith;
using namespace std;

int main()
{
    Complex z(4,5);
    Complex z1;
    Complex z3(4, 5);
    Complex z4(6, 3);
    Complex z7(2, 0);
    Complex z8(6, 3);
    Complex z9(2, 1);
    Complex z10;
    cout << "z=";
    z.afficher();
    cout << "z1=";
    z1.afficher();
    Complex z2 = z.conjugue();
    cout << "le conjugue de z est z2 =";
    z2.afficher();
    cout <<"le module de z2 est ="<< z2.module() << endl;
    cout << endl;
 
    cout << "L'addition de z3 et z4 est z5:" << endl;
    Complex z5 = z3.add(z4);
    cout << "z5 ="; 
    z5.afficher();
    cout << endl;
    cout << "Le produit de z7 et z4 est z6:" << endl;
    Complex z6 = z7.prod(z5);
    cout << "z6 =";
    z6.afficher();
    cout << endl;
    cout << "z8 =";
    z8.afficher();
    cout << "z9 =";
    z9.afficher();
    cout << "La division de z8 par z9 est :z10" << endl;
    z10 = z8.div(z9);
    z10.afficher();


    return 0;
}
