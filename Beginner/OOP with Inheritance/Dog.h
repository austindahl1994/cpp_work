#pragma once
#include <string>
#include "Animal.h"

class Dog : public Animal {
public:
	Dog(const std::string& name, int age, const std::string& breed);
	void setBreed(const std::string& breed);
	std::string getBreed() const;
private:
	std::string m_breed;
};

