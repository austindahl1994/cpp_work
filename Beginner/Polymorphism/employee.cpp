#include "Employee.h"

Employee::Employee() : name_(""), age_(0), salary_(0) {}

Employee::Employee(const Employee& other)
	: name_(other.name_), age_(other.age_), salary_(other.salary_) {}

Employee::Employee(const std::string& name, int age, double salary) 
	: name_(name), age_(age), salary_(salary) {}

Employee::~Employee() {
	std::cout << "Base class Employee Destructor called with name: " << name_ << std::endl;
}

std::string Employee::getName() const {
	return name_;
}

int Employee::getAge() const {
	return age_;
}

double Employee::getSalary() const {
	return salary_;
}

void Employee::setName(const std::string& name) {
	name_ = name;
}

void Employee::setAge(int age) {
	age_ = age;
}

void Employee::setSalary(const double salary) {
	salary_ = salary;
}

void Employee::raiseSalary(const double percent) {
	std::cout << "Base class Employee raiseSalary() called." << std::endl;
	salary_ *= (1 + percent/100.0);
}

void Employee::promote() {
	std::cout << "You promoted a standard employee!" << std::endl;
}