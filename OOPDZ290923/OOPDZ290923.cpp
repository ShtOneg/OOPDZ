#include <iostream>
#include <string>
#include <Windows.h>
#include <math.h>

using namespace std;

class Triangle {
public:
    float a;
    float b;
    float c;
    bool equilateral;
    Triangle(float a, float b, float c) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->equilateral = false;
        if (a == b && b == c) {
            this->equilateral = true;
        }
    };
    Triangle(float a, float b) {
        this->a = a;
        this->b = b;
        this->c = sqrt(pow(a, 2) + pow(b, 2));
        this->equilateral = false;
    };
    float perimetr() {
        if (equilateral) {
            return a * 3;
        }
        return a + b + c;
    };
    void print() {
        cout << "Сторона a: " << a << ", сторона b: " << b << ", cторона c: " << c << "\nПериметр: " << this->perimetr() << "\n\n";
    };
    bool operator == (Triangle& tr) {
        if (this->perimetr() == tr.perimetr()) {
            return true;
        }
        return false;
    }
    bool operator > (Triangle& tr) {
        if (this->perimetr() > tr.perimetr()) {
            return true;
        }
        return false;
    }
    bool operator < (Triangle & tr) {
        if (this->perimetr() < tr.perimetr()) {
            return true;
        }
        return false;
    }

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Triangle tr1(6.25, 7.85, 9.65);
    Triangle tr2(5, 7);
    tr1.print();
    tr2.print();
    if (tr1 > tr2) {
        cout << tr1.perimetr();
    }
    else if (tr1 < tr2) {
        cout << tr2.perimetr();
    }
}



