//============================================================================
// Name        : T_041_Pointers.cpp
// Author      : kagaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*
 *
 * */
void function()
{
	int  var = 20;   // actual variable declaration.
	   int  *ip;        // pointer variable

	   ip = &var;       // store address of var in pointer variable

	   cout << "Value of var variable: ";
	   cout << var << endl;

	   // print the address stored in ip pointer variable
	   cout << "Address stored in ip variable: ";
	   cout << ip << endl;

	   // access the value at the address available in pointer
	   cout << "Value of *ip variable: ";
	   cout << *ip << endl;
}
int main() {
	int  var1;
	   char var2[10];

	   cout << "Address of var1 variable: ";
	   cout << &var1 << endl;

	   cout << "Address of var2 variable: ";
	   cout << &var2 << endl;
	   function();
	return 0;
}
