#include "Book.h"
#include <iostream>

Book::Book(std::string name, std::string author, int pages, int year) {
	this->name = name;
	this->author = author;
	this->pages = pages;
	this->year = year;
};
void Book::print() {
	std::cout << "Name: " << this->name << ", author: " << this->author << ", count of pages: " << this->pages << ", date of realese: " << this->year << std::endl;
};
std::string Book::getAuthor() {
	return this->author;
};
std::string Book::getName() {
	return this->name;
};
int Book::getPages() {
	return this->pages;
};
int Book::getYear() {
	return this->year;
};
