/*
4. Write a Program which illustrates Method Overriding by using three classes.
*/

#include <iostream>
using namespace std;

class ClassA {
public:
    virtual void show() {
        cout << "This is ClassA." << endl;
    }
};

class ClassB : public ClassA {
public:
    void show() override {
        cout << "This is ClassB." << endl;
    }
};

class ClassC : public ClassA {
public:
    void show() override {
        cout << "This is ClassC." << endl;
    }
};

int main() {
    ClassA a;
    ClassB b;
    ClassC c;

    ClassA* ptrA = &a;
    ClassA* ptrB = &b;
    ClassA* ptrC = &c;

    ptrA->show()
    ptrB->show()
    ptrC->show()

    return 0;
}
