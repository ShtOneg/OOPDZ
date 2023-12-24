#pragma once
#include <string>

class Person {
private:
	int age;
	std::string name;
public:
	Person(int age, std::string name);
	void print();
	int getAge();
	void setAge(int age);
	std::string getName();
	void setName(std::string name);
};
