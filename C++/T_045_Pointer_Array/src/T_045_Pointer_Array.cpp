//============================================================================
// Name        : T_045_Pointer_Array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * C++ Pointers vs Arrays
 * Pointers and arrays are strongly related.
 * In fact, pointers and arrays are interchangeable
 * in many cases. For example, a pointer that points to
 * the beginning of an array can access that array by using
 * either pointer arithmetic or array-style indexing. Consider
 * the following program −
 * */



#include <iostream>

using namespace std;
const int MAX = 3;

int main () {
   int  var[MAX] = {10, 100, 200};
   int  *ptr;

   // let us have array address in pointer.
   ptr = var;

   for (int i = 0; i < MAX; i++) {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;

      // point to the next location
      ptr++;
   }

   return 0;
}

/*
 * When the above code is compiled and executed, it produces result something as follows −

Address of var[0] = 0xbfa088b0
Value of var[0] = 10
Address of var[1] = 0xbfa088b4
Value of var[1] = 100
Address of var[2] = 0xbfa088b8
Value of var[2] = 200
 *
 *
 * */
