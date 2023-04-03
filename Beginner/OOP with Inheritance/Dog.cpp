#include "Dog.h"
Dog::Dog(const std::string& name, int age, const std::string& breed) 
	: Animal(name, age), m_breed(breed) {}

void Dog::setBreed(const std::string& breed) {
	m_breed = breed;
}

std::string Dog::getBreed() const {
	return m_breed;
}