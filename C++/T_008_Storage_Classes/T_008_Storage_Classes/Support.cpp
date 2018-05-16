#include <iostream>
#include "stdafx.h"
using namespace std;
extern int counts;

void write_extern(void) {
	cout << "Count is " << counts << endl;
}