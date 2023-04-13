#include "Engineer.h"

Engineer::Engineer() : Employee(), engineerBenefit_(100) {}

Engineer::Engineer(const Engineer& other)
	: Employee(other), engineerBenefit_(other.engineerBenefit_) {}

Engineer::Engineer(const std::string name, int age, double salary) 
	: Employee(name, age, salary), engineerBenefit_(100) {}

Engineer::~Engineer() {
	std::cout << "Engineer Destructor called by the name: " << name_ << std::endl;
}

void Engineer::setBenefitAmount(const int amount) {
	engineerBenefit_ = amount;
}

int Engineer::getBenefitAmount() const {
	return engineerBenefit_;
}

void Engineer::raiseSalary(const double percent) {
	std::cout << "Derived class Engineer raiseSalary() called." << std::endl;
	salary_ *= (1 + percent / 100.0) + engineerBenefit_;
}

void Engineer::promote() {
	std::cout << "You promoted an Engineer!" << std::endl;
}