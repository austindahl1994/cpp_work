#include <iostream>
//Three different data types for C++
//Primitive - integer, float, character, bool, double, void, and wide
//User-defined or abstract - class, enum, union, struct, and typedef
//Derived Data types - array, function, pointer, reference

void primitives() {
	int x = 5;
	float y = 2.0;
	char c = 't';
	std::string name = "Austin";
	bool enjoysToLearn = true;
	double xx = 3.0;
	wchar_t w = L'A'; //only use wchar for an api then turn back into char?
}

void userDefined() {
	class myTestClass {
	public:
		myTestClass() {
			std::cout << "This was called from when an object was created for myTestClass" << std::endl;
		}
		~myTestClass() {
			std::cout << "Destructor is destroying object" << std::endl;
		}
	};

	myTestClass newObj;
}

void derived() {
	
}


int main(int argc, char *argv[]) {
	std::cout << "Hello, World." << std::endl;
	userDefined();
	return 0;
}