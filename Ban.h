#pragma once
class Ban {
public:
	// constructor
	Ban() { n1 = 0; n2 = 0; n3 = 0; n4 = 0; total = 0; }
	Ban(int a, int b, int c, int d) {
		n1 = a; n2 = b; n3 = c; n4 = d; total = 0;
	}
	// member data
	int n1, n2, n3, n4, total;
	
	// member function
	void sum();
	Ban operator+(Ban);
};
