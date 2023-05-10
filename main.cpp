#include <iostream>
#include "Ban.h"
using namespace std;

void main() {
	Ban A, B, C;
	A = Ban(10, 50, 3, 4);
	B = Ban(0, 45, 2, 4);
	A.sum(); B.sum();
	cout << "A.total = " << A.total << " B.total = " << B.total << endl;
	C = A + B;
	C.sum();
	cout << "C.total = " << C.total << endl;
}