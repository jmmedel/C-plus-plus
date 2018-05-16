//============================================================================
// Name        : T_048_Array_Pointer2.cpp
// Author      : kagaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 *
 * There may be a situation, when we want to maintain an array, which can store pointers to an int or char or any other data type available. Following is the declaration of an array of pointers to an integer −

int *ptr[MAX];

This declares ptr as an array of MAX integer pointers. Thus, each element in ptr, now holds a pointer to an int value. Following example makes use of three integers which will be stored in an array of pointers as follows −
 * */
#include <iostream>

using namespace std;
const int MAX = 3;

int main () {
   int  var[MAX] = {10, 100, 200};
   int *ptr[MAX];

   for (int i = 0; i < MAX; i++) {
      ptr[i] = &var[i]; // assign the address of integer.
   }

   for (int i = 0; i < MAX; i++) {
      cout << "Value of var[" << i << "] = ";
      cout << *ptr[i] << endl;
   }

   return 0;
}
/*
 * When the above code is compiled and executed, it produces the following result −

Value of var[0] = 10
Value of var[1] = 100
Value of var[2] = 200
 *
 *
 * */
