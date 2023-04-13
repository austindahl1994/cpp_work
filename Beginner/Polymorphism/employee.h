#pragma once
#include <iostream>
class Employee
{
public:
	Employee();
	Employee(const Employee&);
	Employee(const std::string& name, int age, double salary);
	virtual ~Employee();

	std::string getName() const;
	int getAge() const;
	double getSalary() const;

	void setName(const std::string& name);
	void setAge(const int age);
	void setSalary(const double salary);

	virtual void raiseSalary(const double percent);
	virtual void promote();

private:
	int age_;
protected:
	std::string name_;
	double salary_;
};

