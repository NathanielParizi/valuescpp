/*
 * GreenPotion.cpp
 *
 *  Created on: Jul 7, 2018
 *      Author: Joel
 */

//**********************************************
// Often times in C++ integers can be too large
// and appropriate management of memory is needed.
// A solution to find the max value is INT_MAX which
// is 2147483647. More info provided at
// http://www.cplusplus.com/reference/climits/
//***********************************************

// IO Manipulators will allow us to use setprecision
//to determine how many digits in decimal format we are interested in outputing
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {

	int val = 77;
	cout << "Value is: " << val << endl;

	cout << INT_MAX << endl;
	cout << INT_MIN << endl;

	long int l_val = 123456789023;

	cout << l_val << endl;

	cout << "size of int " << sizeof(int)
			<< "which is just 4 bytes, which is 4 * 8 bits"
					"32-bits." << endl;

	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int mValue = 3242748; // only positive values. because we don't need 1 bit to represent
								   // a negative or positive bit.
	cout << "unsigned int are always positive values: " << mValue << endl;

	//*******************************************Floating Point Variables

	float floatValue = 76.4;
	// cout can switch to scientific notation if values are too large
	cout << "Float value: " << fixed << floatValue << endl; // fixed or scientific
	cout << "Float value: " << setprecision(28) << fixed << floatValue << endl; // fixed or scientific
	cout << "Float value: " << scientific << floatValue << endl; // fixed or scientific
	cout << "MAX storage of float: " << sizeof(float) << endl;    // max size

	//*******************************************Double

	double dValue = 123.1;
	cout << "Double value: " << setprecision(28) << fixed << dValue << endl; // (allows extra precision)

	long double ldVal = 123.1123456789876543210; //16 bytes representing a single number
	cout << "long double value: " << setprecision(28) << fixed << ldVal << endl;

	return 0;
}

