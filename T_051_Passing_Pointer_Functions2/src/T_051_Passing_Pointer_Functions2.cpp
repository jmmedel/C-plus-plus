//============================================================================
// Name        : T_051_Passing_Pointer_Functions2.cpp
// Author      : kagaya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/*
 *The function which can accept a pointer, can also
 *The accept an array as shown in the following example −
 *
 * */


#include <iostream>
using namespace std;

// function declaration:
double getAverage(int *arr, int size);

int main () {
   // an int array with 5 elements.
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   // pass pointer to the array as an argument.
   avg = getAverage( balance, 5 ) ;

   // output the returned value
   cout << "Average value is: " << avg << endl;

   return 0;
}

double getAverage(int *arr, int size) {
   int i, sum = 0;
   double avg;

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;

   return avg;
}

/*
 * When the above code is compiled together and executed, it produces the following result −

Average value is: 214.4
 *
 * */
