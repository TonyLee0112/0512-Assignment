#include <iostream>
#include "Ban.h"
using namespace std;
void Ban::sum() {
		total = n1 + n2 + n3 + n4;
}
Ban Ban::operator+(Ban bb) {
	Ban cc;
	cc.n1 = n1 + bb.n1;
	cc.n2 = n2 + bb.n2;
	cc.n3 = n3 + bb.n3;
	cc.n4 = n4 + bb.n4;
	return cc;
}
