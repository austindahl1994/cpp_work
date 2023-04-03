#include <iostream>
#include "Animal.h"
#include "Dog.h"

class Car {
public:
	Car(std::string make, std::string model, int year) {
		this->m_make = make;
		this->m_model = model;
		this->m_year = year;
	}
	void carDetails();
private:
	std::string m_make;
	std::string m_model;
	int m_year;
};

void Car::carDetails() {
	std::cout << "The car is a " << m_year << " " << m_make << " " << m_model << std::endl;
}


int main(int argc, char* argv[], char* envp[]) {
	Car austinsCar("Toyota", "Camry", 2012);
	austinsCar.carDetails();
	Car* pointerCar = new Car("testModel", "testMake", 2023);
	pointerCar->carDetails();
	delete pointerCar;
	pointerCar = nullptr;
	Animal lion("Ted", 5);
	Dog* dogPtr = new Dog("Goldie", 3, "Golden Retriever");
	std::cout << "The lions age and name are: " << lion.getName() << " " << lion.getAge() << std::endl;
	lion.setAge(lion.getAge() + 1);
	std::cout << "The lion had a birthday and is now: " << lion.getAge() << " years old!" << std::endl;
	std::cout << "The dog's name is: " << dogPtr->getName() << std::endl;
	std::cout << "The dog's age is: " << dogPtr->getAge() << std::endl;
	std::cout << "The dog's breed is: " << dogPtr->getBreed() << std::endl;
	delete dogPtr;
	dogPtr = nullptr;
	return 0;
}