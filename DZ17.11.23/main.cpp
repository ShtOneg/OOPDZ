#include "Person.h"
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    Person* p1 = new Person(25, "Alex");
    Person* p2 = new Person(15, "Sasha");
    Person* p3 = new Person(45, "Sergey");

    vector<Person*> pv{ p3, p2, p1, p3 };
    set<Person*> pse{ p3, p2, p1, p3 };
    stack<Person*> pst;
    pst.push(p3);
    pst.push(p2);
    pst.push(p1);
    pst.push(p3);
    queue<Person*> pq;
    pq.push(p3);
    pq.push(p2);
    pq.push(p1);
    pq.push(p3);
    map<int, Person*> pm;
    pm.emplace(1, p3);
    pm.emplace(2, p2);
    pm.emplace(3, p1);
    pm.emplace(4, p3);

    cout << "Вектор\n";
    for (int i = 0; i < pv.size(); i++) {
        pv[i]->print();
    }
    cout << "\n";

    cout << "Множество\n";
    for (auto it = pse.begin(); it != pse.end(); it++) {
        (*it)->print();
    }
    cout << "\n";

    cout << "Стек\n";
    while (!pst.empty()) {
        pst.top()->print();
        pst.pop();
    }
    cout << "\n";

    cout << "Очередь\n";
    while (!pq.empty()) {
        pq.front()->print();
        pq.pop();
    }
    cout << "\n";

    cout << "Map\n";
    for (auto it = pm.begin(); it != pm.end(); it++) {
        cout << it->first << "----->";
        it->second->print();
    }
    cout << "\n";

}


