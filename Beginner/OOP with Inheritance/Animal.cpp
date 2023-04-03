#include "Animal.h"

Animal::Animal(const std::string& name, int age) : m_name(name), m_age(age) {}

void Animal::setName(const std::string& name) {
	m_name = name;
}

void Animal::setAge(const int age) {
	m_age = age;
}

const std::string Animal::getName() const {
	return m_name;
}

const int Animal::getAge() const {
	return m_age;
}