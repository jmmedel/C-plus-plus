//============================================================================
// Name        : T_050_Passing_Pointer_to_Functions.cpp
// Author      : kagaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/*
 * Passing Pointers to Functions in C++
 * C++ allows you to pass a pointer to a function. To do so,
 * simply declare the function parameter as a pointer type.

Following a simple example where we pass an unsigned long
pointer to a function and change the value inside the function
 which reflects back in the calling function −
 * */
#include <iostream>
using namespace std;
void getSeconds(unsigned long *par);

int main () {
   unsigned long sec;
   getSeconds( &sec );

   // print the actual value
   cout << "Number of seconds :" << sec << endl;

   return 0;
}

void getSeconds(unsigned long *par) {
   // get the current number of seconds
   *par = time( NULL );

   return;
}
/*
 * When the above code is compiled and executed, it produces the following result −

Number of seconds :1294450468
 *
 * */
