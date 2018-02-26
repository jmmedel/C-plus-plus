//============================================================================
// Name        : T_038_Pointer_to_an_Array.cpp
// Author      : kagaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*
 * It is most likely that you would not understand this chapter until you go through the chapter related C++ Pointers.

So assuming you have bit understanding on pointers in C++, let us start: An array name is a constant pointer to the first element of the array. Therefore, in the declaration −

double balance[50];

balance is a pointer to &balance[0], which is the address of the first element of the array balance. Thus, the following program fragment assigns p the address of the first element of balance −

double *p;
double balance[10];

p = balance;

It is legal to use array names as constant pointers, and vice versa. Therefore, *(balance + 4) is a legitimate way of accessing the data at balance[4].

Once you store the address of first element in p, you can access array elements using *p, *(p+1), *(p+2) and so on. Below is the example to show all the concepts discussed above −
In the above example, p is a pointer to double which means it can store address of a variable of double type. Once we have address in p, then *p will give us value available at the address stored in p, as we have shown in the above example.
 *
 *
 * */
int main() {
	// an array with 5 elements.
	   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	   double *p;

	   p = balance;

	   // output each array element's value
	   cout << "Array values using pointer " << endl;

	   for ( int i = 0; i < 5; i++ ) {
	      cout << "*(p + " << i << ") : ";
	      cout << *(p + i) << endl;
	   }
	   cout << "Array values using balance as address " << endl;

	   for ( int i = 0; i < 5; i++ ) {
	      cout << "*(balance + " << i << ") : ";
	      cout << *(balance + i) << endl;
	   }

	   return 0;
}
