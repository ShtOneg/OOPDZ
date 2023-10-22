#include <iostream>
#include <vector>
#include <string>

using namespace std;

class User {
public:
	string name;
	int age;
	User(string name, int age) {
		this->name = name;
		this->age = age;
	}
	void print() {
		cout << "Имя: " << this->name << ", возраст: " << this->age << endl;
	}
};

class Group {
public:
	string title;
	int ageLimit;
	vector <User> users;
	Group(string title, int ageLimit) {
		this->title = title;
		this->ageLimit = ageLimit;
	}
	void appendUser(User user) {
		if (user.age >= ageLimit) {
			this->users.push_back(user);
			cout << "Пользователь добавлен успешно!" << endl;
		}
		else {
			cout << "Отказано в добавлении!" << endl;
		}
	}
	void removeUser(User user) {
		for (int i = 0; i < this->users.size(); i++) {
			if (users[i].name == user.name) {
				users.erase(users.begin() + i);
				cout << "Пользователь успешно удалён" << endl;
				break;
			}
		}
	}
	void clear() {
		this->users.clear();
	};
	void print() {
		cout << "Название: " << this->title << ", возрастной лимит: " << this->ageLimit;
		cout << ", список участников: " << endl;
		for (auto i : this->users) {
			i.print();
		}
	}
};

int main() {
	setlocale(LC_ALL, "");
	User u1("Alex", 15);
	User u2("Alexandr", 13);
	User u3("L", 20);
	Group g1("G", 15);
	g1.appendUser(u1);
	g1.appendUser(u2);
	g1.appendUser(u3);
	g1.print();
	cout << endl;
	g1.removeUser(u1);
	g1.print();
	cout << endl;
	g1.clear();
	g1.print();
}
