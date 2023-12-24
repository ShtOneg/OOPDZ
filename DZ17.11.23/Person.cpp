#include "Person.h"
#include <iostream>

Person::Person(int age, std::string name) {
	this->age = age;
	this->name = name;
};
void Person::print() {
	std::cout << "Имя: " << this->name << ", возраст: " << this->age << std::endl;
};
int Person::getAge() {
	return this->age;
};
void Person::setAge(int age) {
	this->age = age;
};
std::string Person::getName() {
	return this->name;
};
void Person::setName(std::string name) {
	this->name = name;
};