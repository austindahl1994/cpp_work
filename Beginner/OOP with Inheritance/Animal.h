#pragma once
#include <string>
class Animal {
public:
	Animal(const std::string& name, int age);
	void setName(const std::string& name);
	void setAge(const int age);
	const std::string getName() const;
	const int getAge() const;
private:
	std::string m_name;
	int m_age;
};
