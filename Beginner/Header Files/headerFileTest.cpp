#include <iostream>
#include "headerFileTest.h"

MyTestClass::MyTestClass(std::string message) {
	myMessage = message;
}

void MyTestClass::myClassFunc() {
	std::cout << "The message was: " << myMessage << std::endl;
}

void myTestFunc() {
	std::cout << "This is from a test function outside of the class" << std::endl;
}