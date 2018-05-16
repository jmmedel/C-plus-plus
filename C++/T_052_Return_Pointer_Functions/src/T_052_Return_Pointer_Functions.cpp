//============================================================================
// Name        : T_052_Return_Pointer_Functions.cpp
// Author      : kagaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 *Return Pointer from Functions in C++
 *
 *
 *As we have seen in last chapter how C++ allows to return an array from a function, similar way C++ allows you to return a pointer from a function. To do so, you would have to declare a function returning a pointer as in the following example −

int * myFunction() {
   .
   .
   .
}

Second point to remember is that, it is not good idea to return the address of a local variable to outside of the function, so you would have to define the local variable as static variable.

Now, consider the following function, which will generate 10 random numbers and return them using an array name which represents a pointer i.e., address of first array element.
 *
 *
 * */


#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

// function to generate and retrun random numbers.
int * getRandom( ) {
   static int  r[10];

   // set the seed
   srand( (unsigned)time( NULL ) );

   for (int i = 0; i < 10; ++i) {
      r[i] = rand();
      cout << r[i] << endl;
   }

   return r;
}

// main function to call above defined function.
int main () {
   // a pointer to an int.
   int *p;

   p = getRandom();
   for ( int i = 0; i < 10; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }

   return 0;
}
