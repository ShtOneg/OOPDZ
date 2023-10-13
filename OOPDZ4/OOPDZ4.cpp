#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Component {
public:
    string name;
    float price;
    Component(string name, float price) {
        this->name = name;
        this->price = price;
    };
    void print() {
        cout << "Название: " << this->name << ", Цена: " << this->price << endl;
    };
};

class CPU : public Component {
public:
    string socket;
    int cores;
    CPU(string name, float price, string socket, int cores) : Component(name, price) {
        this->name = name;
        this->price = price;
        this->socket = socket;
        this->cores = cores;
    };
    void print() {
        cout << "Название процессора: " << this->name << ", Цена: " << this->price << ", Сокет: " << this->socket << ", Кол-во ядер: " << this->cores << endl;
    };
};

class RAM : public Component {
public:
    int volume;
    int speed;
    RAM(string name, float price, int volume, int speed) : Component(name, price) {
        this->name = name;
        this->price = price;
        this->volume = volume;
        this->speed = speed;
    };
    void print() {
        cout << "Название ОЗУ: " << this->name << ", Цена: " << this->price << ", Обьём: " << this->volume << ", Скорость: " << this->speed << endl;
    };
};

class GPU : public Component {
public:
    int memory;
    int cores;
    GPU(string name, float price, int memory, int cores) : Component(name, price) {
        this->name = name;
        this->price = price;
        this->memory = memory;
        this->cores = cores;
    };
    void print() {
        cout << "Название видеокарты: " << this->name << ", Цена: " << this->price << ", Память: " << this->memory << ", КОл-во ядер: " << this->cores << endl;
    };
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}


