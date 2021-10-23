#pragma once
namespace arith {
	class Complex
	{private:
		double re;
		double img;
	public:
		void afficher();
		//constructeur:
		Complex(double r, double im);
		Complex();//constructeur sans parametres.
		double module();
		Complex conjugue();
		Complex add(Complex b);
		Complex sub(Complex b);
		Complex prod(Complex c);
		Complex div(Complex e);
	};
}
