#pragma once
#include "Employee.h"

class Engineer : public Employee
{
public:
	Engineer();
	Engineer(const Engineer&);
	Engineer(const std::string name, int age, double salary);
	virtual ~Engineer();
	void setBenefitAmount(const int amount);
	int getBenefitAmount() const;

	//virtual methods
	virtual void raiseSalary(const double percent) override;
	virtual void promote() override;
private:
	int engineerBenefit_;
};

