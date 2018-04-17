//============================================================================
// Name        : polynomials.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "nomial.hpp"
#include "nomials\fundemental\fundemental.hpp"
#include "nomials\arithmetic\arithmetic.hpp"
//#include "nomials\trigenometry\trigenometry.hpp"
using namespace std;

void testnomial(nomial<double> * func);

int main() {

	//testfunction
	//func1 = sin(x)+x
	//nomial<double> * func1 = new adder<double>(*new sine<double>(*new identity<double>()),*new identity<double>());
	//nomial<double> * func1 = &(*new sine<double>(*new identity<double>())+*new identity<double>());
	//nomial<double> * func1 = new constant<double>(2);
	//nomial<double> * func1 = &(*new identity<double>() + *new identity<double>());
	nomial<double> * func1 = &(*new identity<double>()+*new identity<double>()+*new constant<double>(2));
	testnomial(func1);


	return 0;
}

void testnomial(nomial<double> * func)
{
	cout << "1: " << func->eval(1) << endl;
	cout << "2: " << func->eval(2) << endl;
	cout << "3: " << func->eval(3) << endl;
	cout << "4: " << func->eval(4) << endl;
}
