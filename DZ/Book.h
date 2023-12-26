#pragma once
#include <string>

class Book {
private:
	std::string name;
	std::string author;
	int pages;
	int year;
public:
	Book(std::string name, std::string author, int pages, int year);
	void print();
	std::string getAuthor();
	std::string getName();
	int getPages();
	int getYear();
};
