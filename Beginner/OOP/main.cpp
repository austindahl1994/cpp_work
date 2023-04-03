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
	//Can also declare the constructor that uses the member initializer list if passed in params are bigger or more expensive
	//Car(std::string make, std::string model, int year) : (m_make(make), m_model(model), m_year(year))
	//private with m_make, m_model, and m_year
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
	return 0;
}