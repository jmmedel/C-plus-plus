//============================================================================
// Name        : T_047_Array_Of_Pointers.cpp
// Author      : kagaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
 * C++ Array of Pointers
 * Before we understand the concept
 * of array of pointers, let us consider the
 * following example, which makes use of an array
 * of 3 integers −
 * */


const int MAX = 3;

int main () {
   int  var[MAX] = {10, 100, 200};

   for (int i = 0; i < MAX; i++) {

      cout << "Value of var[" << i << "] = ";
      cout << var[i] << endl;
   }

   return 0;
}

/*
 * When the above code is compiled and executed, it produces the following result −

Value of var[0] = 10
Value of var[1] = 100
Value of var[2] = 200
 *
 * */
