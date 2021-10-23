#include "Complex.h"
#include <iostream>
#include<math.h>
using namespace arith;
using namespace std;
/*Complex Complex::init(double r, double im)
{
    //this (Complex *) :pointeur sur l'objet courant .
    this->re = r;
    this->img = im;
    return *this;
}
*/
void Complex::afficher()
{
    if (this->img >= 0) {
        cout  << "(" <<this->re << "+i" << this->img <<")"<< endl;
    }
    else {
        cout << "(" << this->re << "-i" << -this->img << ")" << endl;
    }
}

Complex::Complex(double r, double im)
{
    this->re = r;
    this->img = im;
}

Complex::Complex()
{
    this->re = 0;
    this->img = 0;
}

double Complex::module()
{
    return sqrt(pow(this->re, 2) + pow(this->img, 2));
}

Complex Complex::conjugue()
{
    Complex t; // t c'est un objet .
    t.re = this->re;
    t.img = -(this->img);
    // Complex t(this->re,-this->img);
    return t;
}

Complex Complex::add(Complex b)
{
    Complex t((this->re + b.re),(this->img + b.img));
    return t;
}

Complex Complex::sub(Complex b)
{
    Complex res((this->re - b.re), (this->img - b.img));
    return res;
}

Complex Complex::prod(Complex c)
{
    Complex res;
    res.re = (this->re * c.re) - (this->img * c.img);
    res.img = (this->re * c.img) + (this->img * c.re);
    return res;
}

Complex Complex::div(Complex e){
    
    Complex res; 
    res.re = (this->re * e.re + this->img * e.img) / (pow(e.re, 2) + pow(e.img, 2));
    res.img = (this->img * e.re - this->re * e.img) / (pow(e.re, 2) + pow(e.img, 2));
        return res;
}
