#include <iostream>
#include "Employee.h"
#include "Engineer.h"
//When creating an object on the heap, it is created with the 
//pointer pointing to the address of the object
//Very important to use copy constructors with polymorphism

void createNewEngineer(Employee* ptr) {
	delete ptr;
	ptr = new Engineer("David", 31, 75000.00);
	std::cout << "The Engineer's name is: " << ptr->getName() << std::endl;
	std::cout << "The Engineer's age is: " << ptr->getAge() << std::endl;
	std::cout << "The Engineer's Salary is: " << ptr->getSalary() << std::endl;
	ptr->raiseSalary(10);
	std::cout << "After a 10% raise the Engineers salary is: " << ptr->getSalary() << std::endl;
}

void createNewEmployee(Employee* ptr) {
	delete ptr;
	ptr = new Employee("Marshall", 27, 56000.00);
	std::cout << "The Employee's name is: " << ptr->getName() << std::endl;
	std::cout << "The Employee's age is: " << ptr->getAge() << std::endl;
	std::cout << "The Employee's Salary is: " << ptr->getSalary() << std::endl;
	ptr->promote();
}

void cleanUpPointer(Employee* ptr) {
	delete ptr;
	ptr = nullptr;
}

int main(int argc, char* argv[], char* envp[]) {
	//Want to pass pointer for creating new objects
	Employee* employeePtr = nullptr;

	//creating object on the heap
	createNewEmployee(employeePtr);
	createNewEngineer(employeePtr);

	//creating object on the stack
	Engineer eng("tom", 51, 132000.00);
	Engineer* ptr = &eng;

	std::cout << "Now working with an object on the stack" << std::endl;
	std::cout << "The Engineer's name is: " << ptr->getName() << std::endl;
	std::cout << "The Engineer's age is: " << ptr->getAge() << std::endl;
	std::cout << "The Engineer's Salary is: " << ptr->getSalary() << std::endl;
	ptr->raiseSalary(10);
	std::cout << "After a 10% raise the Engineers salary is: " << ptr->getSalary() << std::endl;

	//cleaning up the pointer
	cleanUpPointer(employeePtr);
	//No need to clean up engineerPointer since is on stack and destroyed automatically
	//when going out of scope
	return 0;
}