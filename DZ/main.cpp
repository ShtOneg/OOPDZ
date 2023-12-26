#include "Book.h"
#include <iostream>
#include <forward_list>
#include <unordered_map>

using namespace std;

void maxPages(forward_list<Book*> list) {
    int max = list.front()->getPages();
    for (auto i = list.begin(); i != list.end(); i++) {
        if ((*i)->getPages() > max) {
            max = (*i)->getPages();
        }
    }
    cout << "Max count of pages: " << max << endl;
};

void maxYear(forward_list<Book*> list) {
    int max = list.front()->getYear();
    for (auto i = list.begin(); i != list.end(); i++) {
        if ((*i)->getYear() > max) {
            max = (*i)->getYear();
        }
    }
    cout << "Max date of realese: " << max << endl;
};

int main()
{
    setlocale(LC_ALL, "");
    Book* b1 = new Book("Book1", "Author1", 100, 1956);
    Book* b2 = new Book("Book2", "Author2", 170, 2021);
    Book* b3 = new Book("Book3", "Author3", 150, 1723);
    Book* b4 = new Book("Book4", "Author4", 200, 1856);
    Book* b5 = new Book("Book3", "Author3", 150, 1723);
    Book* b6 = new Book("Book2", "Author2", 170, 2021);

    unordered_map<string, int> c;
    forward_list<Book*> list{ b1, b2, b3, b4, b5, b6 };

    for (auto i = list.begin(); i != list.end(); i++) {
        int counter = 0;
        for (auto j = list.begin(); j != list.end(); j++) {
            if ((*i)->getAuthor() == (*j)->getAuthor() && (*i)->getName() == (*j)->getName() && (*i)->getName() == (*j)->getName() && (*i)->getName() == (*j)->getName()) {
                counter++;
            }
        }
        c.emplace((*i)->getName(), counter);
    }

    cout << "Кол-во книг в библиотеке: " << endl;
    for (auto it = c.begin(); it != c.end(); it++) {
        cout << it->first << " -----> " << it->second << "\n"; //first = ключ, second = значение
    }
    cout << "\n";

    maxPages(list);
    maxYear(list);
}
