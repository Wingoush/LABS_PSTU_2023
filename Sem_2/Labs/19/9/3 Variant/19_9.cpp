#include <iostream>
#include "Vector.h"
#include "Error.h"

using namespace std;

int main(){
	try {
		Vector x(2);
		Vector y(2);

		cout << "Vector x: " << x << endl;
		cout << "Index of the number from vector x to get: "; int indx; cin >> indx;
		cout << "Element with " << indx << " index: " << x[indx] << endl;

		y++;
		cout << "Vector y: " << y << endl;
		++y;
		cout << "Vector y: " << y << endl;
		y++;
		cout << "Vector y: " << y << endl;

	}
	catch (Error& e) {
		e.what();
	}
	return 0;
}
/*
Tests:

Test 1:
Vector x: [0] [0]
Index of the number from vector x to get: 2
Index Error.

Test 2:
Vector x: [0] [0]
Index of the number from vector x to get: 1
Element with 1 index: 0
Input element to add in the end: 5
Vector y: [0] [0] [5]
Input element to add in the beginning: 1
Vector y: [1] [0] [0] [5]
Size Error.
*/