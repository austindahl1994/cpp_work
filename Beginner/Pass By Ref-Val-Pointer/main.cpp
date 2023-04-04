#include <iostream>
using namespace std;
//main is the driver function

void passByReference(int& x) {
	x++;
}

void passByValue(int x) {
	x++;
}

void passByPointer(int* ptr) {
	*ptr = *ptr + 1;
}

int main() {
	int x = 4;
	int* ptr = &x;
	cout << "When looking at what the pointer is equivilant to: " << ptr << endl;
	cout << "When dereferencing a pointer the value is: " << *ptr << endl;
	cout << "X is equal to: " << x << endl;
	passByValue(x);
	cout << "After pass by value x is: " << x << endl;
	passByReference(x);
	cout << "After pass by reference x is: " << x << endl;
	passByPointer(ptr);
	cout << "After pass by pointer x is: " << x << endl;
	return 0;
}